using System;
using System.IO;

class ExecutePasswords {
    static void Main(string[] args) {
        string filePath = "temp_passwords.txt";
        string targetPassword = args[1];
        int attempts = 0;

        try {
            using (StreamReader sr = new StreamReader(filePath)) {
                string password;
                while ((password = sr.ReadLine()) != null) {
                    attempts++;
                    Console.WriteLine("Trying: " + password);
                    if (password == targetPassword) {
                        Console.WriteLine("Password found: " + password + " in " + attempts + " attempts");
                        return;
                    }
                }
            }
        } catch (Exception e) {
            Console.WriteLine("The file could not be read:");
            Console.WriteLine(e.Message);
        }

        Console.WriteLine("Password not found");
    }