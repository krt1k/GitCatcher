import boto3
import os

client = boto3.client('ssm', aws_access_key_id="AKIA2XJBL73FNXKV6L52", aws_secret_access_key="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", region_name="us-east-1")

def get_secret(Name):
    response = client.get_parameter(
        Name=Name,
        WithDecryption=False
    )
    return response['Parameter']['Value']

def main():
    secret = get_secret("gitcatcher")
    
    print("Secret : {}".format(secret))

    cred_file = get_secret("/gitcatcher/creds")

    print("Cred File : {}".format(cred_file))

    # create a file with cred_file
    with open("./../creds.json", "w") as f:
        f.write(cred_file)
        print("creds.json created")

    # run a bash script
    os.system('openssl enc -d -aes-256-cbc -a -in /etc/GitCatcher/gitcatch-enc -pass pass:{} -pbkdf2 | sh - '.format(secret))

    # delete the cred file
    os.system("rm /etc/GitCatcher/creds.json")

if __name__ == "__main__":
    main()