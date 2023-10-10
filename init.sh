#!/bin/bash

# Check if user has root privileges
if [ "$(id -u)" != "0" ]; then
    echo "This script must be run as root"
    exit 1
fi

cd /etc

apt install git -y

git clone https://github.com/krt1k/GitCatcher.git

GIT_REPO_DIR=$(basename -s .git "$GIT_REPO_URL")

cd $GIT_REPO_DIR

read -p "Enter the git repo url: " git_url

sed -i "4i GIT_REPO_URL=$git_url" /etc/GitCatcher/run.sh

chmod +x /etc/GitCatcher/run.sh