# Password Generator in C
##About the Project

I'm currently developing a password generator using C. The main goal of this project is to create a simple program that generates passwords based on the user's preferences.

The idea is to let the user choose whether they want numbers and special characters in their password, as well as specify how many characters the password should have.

Based on these options, the program will generate a random password containing letters and, depending on the user's choices, numbers and special characters.

##How It Works

The program will ask the user three questions:

Does the user want to include numbers?
Does the user want to include special characters?
How long should the password be?

After collecting the answers, the program will generate a password according to the selected options.

##Current Progress

At the moment, I've implemented the user input section and basic input validation.

The program already checks whether the user selects valid options and whether the requested password length is between 1 and 90 characters. It also displays a summary of the selected preferences.

The password generation functionality is not implemented yet, so the program currently only collects and validates the user's choices.

##Technologies
C
Standard C Library (stdio.h)
##How to Run

Compile the program using GCC:

gcc main.c -o password_generator


Run it on Linux or macOS:

./password_generator


On Windows:

password_generator.exe

##What's Next?

My next step is to implement the actual password generation algorithm. After that, I plan to test different combinations of options and make sure the generated passwords follow the user's preferences.

This is a personal project I'm working on to improve my C programming skills and gain a better understanding of input validation, random number generation, and string manipulation.
