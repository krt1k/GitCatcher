#!/bin/bash

set -e

if [ "$(id -u)" != "0" ]; then
    echo "This script must be run as root"
    exit 1
fi

rm -rf /etc/GitCatcher
rm -f /var/log/gitcatcher.log

# unset rentlyEmail from the /etc/environment file
sed -i '/rentlyEmail/d' /etc/environment

# remove the last line of /etc/crontab
sed -i '$ d' /etc/crontab

rm -f /usr/bin/run