#!/bin/bash

# Check if user has root privileges
if [ "$(id -u)" != "0" ]; then
    echo "This script must be run as root"
    exit 1
fi

# Creating the directory where the script will be stored
mkdir -p /etc/GitCatcher

# Copy the script to the /etc directory
cp -r . /etc/GitCatcher/

# Specify the Git repository URL
read -p "Enter the git repo url that you want to sync: " git_url

# Add the git repo url to the script
sed -i "4i GIT_REPO_URL=$git_url" /etc/GitCatcher/run.sh
chmod +x /etc/GitCatcher/run.sh

# create a cronjob that runs the script every hour
echo "0 * * * * root /etc/GitCatcher/run.sh" >> /etc/crontab