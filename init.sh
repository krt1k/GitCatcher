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

chmod +x /etc/GitCatcher/run.sh

# create a cronjob that runs the script every hour
echo "0 * * * * root bash /etc/GitCatcher/run.sh $git_url" >> /etc/crontab