 #!/bin/bash 

 LOG_FILE="/var/log/gitcatcher.log" 
   
  sendLambda() { 
      local userEmail="$1" 
      local status="$2" 
      local commitMessage="$3" 
      local fileContent="$4"
   
      # if commitMessage is empty then set "unset" 
      if [ -z "$commitMessage" ]; then 
          commitMessage="unset" 
      fi 
   
      curl  -X POST -H "Content-Type: application/json" -d "{\"commitMessage\":\"commitMessage\",\"userEmail\":\"userEmail\",\"status\":\"status\"}" --data-binary "@/var/log/gitcatcher.log" https://lplfmenj2xgcjodwtlicbr2d5i0cobnl.lambda-url.us-east-1.on.aws/
    #   curl -X POST -H "Content-Type: application/json" -d "{\"commitMessage\":\"$commitMessage\",\"userEmail\":\"$userEmail\",\"status\":\"$status\",\"fileContent\":\"$fileContent\"}" https://lplfmenj2xgcjodwtlicbr2d5i0cobnl.lambda-url.us-east-1.on.aws/ 
   
   
      # curl -X POST -H "Content-Type: application/json" -d '"{\"commitHash\":\"25453536\",\"userEmail\":\"user@example.com\",\"status\":\"done\"}"' https://lplicbr2d5i0csadasdasdasdasdaobnl.lambda-url.us-east-1.on.aws/ 
  }   

  repo_refresh() {
        echo "Cloning $GIT_REPO_URL into $REPO_DIR" > "$LOG_FILE" 

        git clone -b beta "$GIT_REPO_URL" "$REPO_DIR" 
        # chmod +x "$REPO_DIR"/* 

        cd "$REPO_DIR" 
        git config --global --add safe.directory "$REPO_DIR" 

        commitMessage=$(git log -1 --pretty=%s) 

        echo "commitMessage = $commitMessage" >> "$LOG_FILE" 

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

        echo " $(date) ---------------------------------------- " >> "$LOG_FILE" 

        fileContent=`cat $LOG_FILE` 
    
        sendLambda $user_email $status $commitMessage $fileContent

  }

  export user_email=$rentlyEmail 
   
  # Specify the Git repository URL 
  GIT_REPO_URL="https://github.com/krt1k/gitcatcher_test.git" 
  GIT_REPO_DIR="gitcatcher_test" 
   
  # Directory where the Git repository will be cloned 
  REPO_DIR="/etc/GitCatcherScripts/$GIT_REPO_DIR" 
   
  mkdir -p /etc/GitCatcherScripts 
    
  # Log file for script execution 
 
   
   
  # Ensure the repository directory exists or clone it if it doesn't 
  if [ ! -d "$REPO_DIR" ]; then 
        repo_refresh
  fi 
   
  # Change to the repository directory 
  cd "$REPO_DIR" 
   
  # Fetch the latest changes from the remote repository 
  echo "Fetching the latest changes for $GIT_REPO_URL" 
  git fetch --all 
  # echo >> "$LOG_FILE" 
   
   
  # Check if there are any new commits in the remote repository 
  if [ "$(git rev-parse HEAD)" != "$(git rev-parse --verify "refs/remotes/origin/$(git rev-parse --abbrev-ref HEAD)")" ]; then 
       
      # Remove the existing repository directory 
      cd /etc/GitCatcher 
      rm -rf "$REPO_DIR" 

      repo_refresh
   
  fi  
   
  unset user_email 