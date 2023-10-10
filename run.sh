#!/bin/bash

# Specify the Git repository URL

GIT_REPO_DIR=$(basename -s .git "$GIT_REPO_URL")

# Directory where the Git repository will be cloned
REPO_DIR="/etc/GitCatcher/$GIT_REPO_DIR"
chmod +x "$REPO_DIR"/*.sh

# Log file for script execution
LOG_FILE="/var/log/gitcatcher.log"

touch "$LOG_FILE"

# Ensure the repository directory exists or clone it if it doesn't
if [ ! -d "$REPO_DIR" ]; then
    git clone "$GIT_REPO_URL" "$REPO_DIR"

    #run the script for the first time
    if bash $REPO_DIR/run.sh >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
    else
        # Log an error if the script execution fails
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
    fi
fi

# Change to the repository directory
cd "$REPO_DIR"

# Fetch the latest changes from the remote repository
git fetch

# Check if there are any new commits in the remote repository
if [ "$(git rev-parse HEAD)" != "$(git rev-parse @{u})" ]; then
    # Pull the latest changes
    git pull

    # Execute the script from the latest commit and log both stdout and stderr
    if bash $REPO_DIR/run.sh >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
    else
        # Log an error if the script execution fails
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
    fi
fi