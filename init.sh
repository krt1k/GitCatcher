#!/bin/bash

set -e

# Check if user has root privileges
if [ "$(id -u)" != "0" ]; then
    echo "This script must be run as root"
    exit 1
fi

apt install curl -y

# Creating the directory where the script will be stored
mkdir -p /etc/GitCatcher

# Copy the script to the /etc directory
cp -r . /etc/GitCatcher/

# Specify the Git repository URL
# read -p "Enter the git repo url that you want to sync: " git_url

# git_url="https://github.com/krt1k/gitcatcher_test.git"

cp /etc/GitCatcher/run /usr/bin/run
chmod +x /usr/bin/run

current_minute=$(date +"%M")

read -p "Enter your rently email address: " email

# create a cronjob that runs the script every three hour
echo "* * * * * root /usr/bin/run $email" >> /etc/crontab 