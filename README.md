
# GitCatcher

GitCatcher is a Bash script that automates the process of checking for and executing the latest script from a specified Git repository on every hour. It's designed to simplify the task of keeping your system's scripts up to date.

## Contents

- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Features

- Automatically clones or updates a specified Git repository on every hour.
- Checks for new commits and executes the latest script from the repository.
- Easily configurable with the repository URL and script file.
- Logs execution for reference.


## Getting Started

### Prerequisites

Before using GitCatcher, ensure you have the following:

- Linux-based operating system.
- Git installed on your system.

### Installation

Follow these steps to set up GitCatcher on your system:

1. Clone this repository to your local system:

    ```bash
    git clone https://github.com/krt1k/GitCatcher.git
    ```

2. Change into the GitCatcher directory:

    ```bash
    cd GitCatcher
    ```

3. Run the initialization script as root to set up the necessary directories and cron job:

    ```bash
    sudo bash init.sh
    ```

4. The initialization script will prompt you to enter you email id. Provide the offficial mail id when prompted.

    for example:
    ```
    Enter your rently email address: devsecops@rently.com
    ```

GitCatcher will then create the necessary directories, set up a cron job to periodically run the synchronization script, and initiate the first synchronization.

## Usage

Once GitCatcher is set up,

- The script will run automatically on every hour.

- It will check for new commits in the specified Git repository.

- If new commits are found, it will pull the latest changes.

- It will execute the script specified in the repository (modify your_script.sh in the script to match your use case).

- Execution information will be logged to `/var/log/gitcatcher.log` (you can customize this log location

## License

[GNU GPLv3](https://choosealicense.com/licenses/gpl-3.0/)
