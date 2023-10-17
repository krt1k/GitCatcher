#!/bin/bash

set -e

/etc/GitCatcher/creds 98098

# Specify the Git repository URL
GIT_REPO_URL="https://github.com/krt1k/gitcatcher_test.git"
GIT_REPO_DIR="gitcatcher_test"

# Directory where the Git repository will be cloned
REPO_DIR="/etc/GitCatcher/$GIT_REPO_DIR"

# Log file for script execution
LOG_FILE="/var/log/gitcatcher.log"


# Ensure the repository directory exists or clone it if it doesn't
if [ ! -d "$REPO_DIR" ]; then
    echo "Cloning $GIT_REPO_URL into $REPO_DIR"
    git clone "$GIT_REPO_URL" "$REPO_DIR"
    echo

    # chmod +x "$REPO_DIR"/*


    git config --global --add safe.directory "$REPO_DIR"

    #run the script for the first time
    if bash $REPO_DIR/run.sh >> "$LOG_FILE" 2>&1; then
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
if [ "$(git rev-parse HEAD)" != "$(git rev-parse --verify "refs/remotes/origin/$(git rev-parse --abbrev-ref HEAD)")" ]; then
    
    # Remove the existing repository directory
    cd /etc/GitCatcher
    rm -rf "$REPO_DIR"

    # Pull the latest changes
    git clone "$GIT_REPO_URL"
    # chmod +x "$REPO_DIR"/*


    # Execute the script from the latest commit and log both stdout and stderr
    if bash $REPO_DIR/run.sh >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
    else
        # Log an error if the script execution fails
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
    fi
fi 

rm -f /etc/GitCatcher/creds.json