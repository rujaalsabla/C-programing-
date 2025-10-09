/*
name:Botu Sabla 
reg no:ct100/g/26263/25
*/
#include <stdio.h>
#include <string.h> // For strcmp()

int main() {
    char password[50]; // Array to store the user's password input
    const char correct_password[] = "1234";

    printf("Welcome to the Password System.\n");

    // The do-while loop executes the 'do' block at least once,
    // and then repeats the 'do' block as long as the 'while' condition is true.
    do {
        printf("Enter the password: ");
        // Read the user's input string
        if (scanf("%49s", password) != 1) {
            printf("Error reading input.\n");
            // Clear buffer and exit/break if serious input error
            break;
        }

        // Check if the entered password matches the correct password
        // strcmp returns 0 if the two strings are identical
        if (strcmp(password, correct_password) != 0) {
            printf("Incorrect password. Please try again.\n");
        }

    } while (strcmp(password, correct_password) != 0); // Keep looping while the passwords are NOT equal

    printf("Access Granted!\n");

    return 0;
}
