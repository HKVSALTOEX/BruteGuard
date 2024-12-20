import os

def main():
    file_path = input("Enter the path to the password file: ")
    target_password = input("Enter the password to crack: ")

    os.system(f'java -cp . DemanderAcces {file_path} {target_password}')
    os.system(f'./charge_fichier_cpp {file_path} {target_password}')
    os.system(f'./execute_passwords_csharp {file_path} {target_password}')
    os.system(f'node demande_admin.js {file_path} {target_password}')

if __name__ == "__main__":
    main()
