#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]) {
    std::string filePath = argv[1];
    std::string targetPassword = argv[2];
    std::ifstream file(filePath);
    
    if (!file.is_open()) {
        std::cerr << "Unable to open file" << std::endl;
        return 1;
    }

    std::string password;
    while (getline(file, password)) {

        std::ofstream tempFile("temp_passwords.txt", std::ios::app);
        if (tempFile.is_open()) {
            tempFile << password << std::endl;
            tempFile.close();
        }
    }
    file.close();

    std::string command = "./execute_passwords_csharp " + filePath + " " + targetPassword;
    system(command.c_str());

    return 0;
}