# Password Generator in C
## About the Project

I'm currently developing a password generator using C. The main goal of this project is to generate random passwords based on the user's preferences and evaluate how secure they are.

The program will allow users to customize their passwords by choosing whether to include numbers and special characters, as well as specifying the desired password length.

After generating the password, the program will evaluate its strength and classify it as Very Secure, Moderately Secure, or Insecure.

This project is a way for me to improve my C programming skills while learning more about random number generation, input validation, string manipulation, and password security.
## How It Works

The program is designed to follow three main steps:

    User Preferences: The user chooses whether to include numbers and special characters in the password.
    Password Generation: The user specifies the desired password length, and the program generates a random password based on the selected options. Letters will always be included, while numbers and special characters will only be included if requested.
    Password Strength Evaluation: After generating the password, the program evaluates its strength and classifies it as Very Secure, Moderately Secure, or Insecure.

The strength evaluation will consider factors such as password length, character variety, and randomness.
## Current Progress

At the moment, I've implemented the initial user input system and basic input validation.

The program currently:

    Asks the user whether they want to include numbers.
    Asks the user whether they want to include special characters.
    Requests the desired password length.
    Validates the selected options and rejects invalid inputs.
    Accepts password lengths between 1 and 90 characters.
    Displays a summary of the user's selected preferences.

Password generation and password strength evaluation have not been implemented yet.
## Technologies Used

    Programming Language: C
    Standard Library: stdio.h
    Compiler: GCC

## How to Compile and Run

To compile the program using GCC, run:

gcc main.c -o password_generator

On Linux or macOS, execute the program with:

./password_generator

On Windows, run:

password_generator.exe

If your source file has a different name, replace main.c with the correct filename.
## Future Improvements

My next steps are to implement the remaining functionality and improve the overall reliability of the program.

    Implement the password generation algorithm.
    Generate passwords using random characters.
    Include numbers and special characters only when requested.
    Ensure the generated password matches the length specified by the user.
    Develop a password strength evaluation system.
    Classify passwords as Very Secure, Moderately Secure, or Insecure.
    Improve input handling and error messages.
    Test different password lengths and combinations of character types.
    Use a cryptographically secure random number generator to make the generated passwords suitable for real-world use.

## Project Status

Currently in development.

This is a personal project I'm working on to improve my C programming skills and because its also my hackclub project.
