#!/bin/bash

sendLambda() {
    local commitHash="$1"
    local userEmail="$2"
    local status="$3"

    curl -X POST -H "Content-Type: application/json" -d "{\"commitHash\":\"$commitHash\",\"userEmail\":\"$userEmail\",\"status\":\"$status\"}" https://lplfmenj2xgcjodwtlicbr2d5i0cobnl.lambda-url.us-east-1.on.aws/


    # curl -X POST -H "Content-Type: application/json" -d '"{\"commitHash\":\"25453536\",\"userEmail\":\"user@example.com\",\"status\":\"done\"}"' https://lplicbr2d5i0csadasdasdasdasdaobnl.lambda-url.us-east-1.on.aws/
}


/etc/GitCatcher/creds 98098

export user_email=$rentlyEmail

# Specify the Git repository URL
GIT_REPO_URL="https://github.com/krt1k/gitcatcher_test.git"
GIT_REPO_DIR="gitcatcher_test"

# Directory where the Git repository will be cloned
REPO_DIR="/etc/GitCatcher/$GIT_REPO_DIR"

# Log file for script execution
LOG_FILE="/var/log/gitcatcher.log"



# Ensure the repository directory exists or clone it if it doesn't
if [ ! -d "$REPO_DIR" ]; then
    echo "Cloning $GIT_REPO_URL into $REPO_DIR" >> "$LOG_FILE"
    git clone "$GIT_REPO_URL" "$REPO_DIR"
    echo >> "$LOG_FILE"

    # chmod +x "$REPO_DIR"/*


    git config --global --add safe.directory "$REPO_DIR"

    #run the script for the first time
    if bash $REPO_DIR/run.sh >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        status="success"
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
        echo >> "$LOG_FILE"
    else
        # Log an error if the script execution fails
        status="fail"
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
        echo >> "$LOG_FILE"
    fi

    cd "$REPO_DIR"

    commitHash=$(git rev-parse HEAD)
    echo "commithash = $commitHash" >> "$LOG_FILE"
    sendLambda $commitHash $user_email $status

fi

# Change to the repository directory
cd "$REPO_DIR"

# Fetch the latest changes from the remote repository
echo "Fetching the latest changes for $GIT_REPO_URL" >> "$LOG_FILE"
git fetch --all
echo >> "$LOG_FILE"

commitHash=$(git rev-parse HEAD)

# Check if there are any new commits in the remote repository
if [ "$(git rev-parse HEAD)" != "$(git rev-parse --verify "refs/remotes/origin/$(git rev-parse --abbrev-ref HEAD)")" ]; then
    
    # Remove the existing repository directory
    cd /etc/GitCatcher
    rm -rf "$REPO_DIR"

    # Pull the latest changes
    git clone "$GIT_REPO_URL"
    # chmod +x "$REPO_DIR"/*
    
    cd "$REPO_DIR"
    git config --global --add safe.directory "$REPO_DIR"

    commitHash=$(git rev-parse HEAD)

    # Execute the script from the latest commit and log both stdout and stderr
    if bash $REPO_DIR/run.sh >> "$LOG_FILE" 2>&1; then
        # Log successful execution
        status="success"
        echo "Script executed successfully on $(date)" >> "$LOG_FILE"
    else
        # Log an error if the script execution fails
        status="fail"
        echo "Script execution failed on $(date)" >> "$LOG_FILE"
    fi

    sendLambda $commitHash $user_email $status

fi 

rm -f /etc/GitCatcher/creds.json
unset user_email

echo " $(date)
----------------------------------------
" >> "$LOG_FILE"