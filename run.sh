#!/bin/bash

# Specify the Git repository URL
GIT_REPO_URL=$1
GIT_REPO_DIR=$(basename -s .git "$GIT_REPO_URL")

# Directory where the Git repository will be cloned
REPO_DIR="/etc/GitCatcher/$GIT_REPO_DIR"
chmod +x "$REPO_DIR"/*

# Log file for script execution
LOG_FILE="/var/log/gitcatcher.log"

touch "$LOG_FILE"

# Ensure the repository directory exists or clone it if it doesn't
if [ ! -d "$REPO_DIR" ]; then
    echo "Cloning $GIT_REPO_URL into $REPO_DIR"
    git clone "$GIT_REPO_URL" "$REPO_DIR"
    echo

    git config --global --add safe.directory "$REPO_DIR"

    #run the script for the first time
    if /usr/bin/run >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
        echo
    else
        # Log an error if the script execution fails
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
        echo
    fi
fi

# Change to the repository directory
cd "$REPO_DIR"

# Fetch the latest changes from the remote repository
echo "Fetching the latest changes for $GIT_REPO_URL"
git fetch --all
echo

# Check if there are any new commits in the remote repository
if [ "$(git rev-parse HEAD)" != "$(git rev-parse --verify "refs/remotes/origin/main")" ]; then
    
    # Remove the existing repository directory
    cd /etc/GitCatcher
    rm -rf "$REPO_DIR"

    # Pull the latest changes
    git clone "$GIT_REPO_URL"

    # Execute the script from the latest commit and log both stdout and stderr
    if /usr/bin/run >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
    else
        # Log an error if the script execution fails
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
    fi
fi

