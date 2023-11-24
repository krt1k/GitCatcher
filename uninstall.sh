#!/bin/bash

set -e

# Check if user has root privileges
if [ "$(id -u)" != "0" ]; then
    echo "This script must be run as root"
    exit 1
fi

# Remove the GitCatcher directory
rm -rf /etc/GitCatcher

# Remove the run script
rm /usr/bin/gitcatch

# Remove the cronjob
sed -i '/root \/usr\/bin\/gitcatch/d' /etc/crontab

# Remove the rentlyEmail environment variable
sed -i '/rentlyEmail/d' /etc/environment

echo "Uninstallation complete."