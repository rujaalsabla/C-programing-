/*
name: Botu Sabla
reg no:ct100/g/26263/25
*/
#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    int secret_number;
    int guess;
    int attempts = 0;

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Generate a random number between 1 and 20 (inclusive)
    secret_number = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I've picked a number between 1 and 20. Try to guess it.\n");

    // The loop continues indefinitely until the 'break' statement is executed
    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
             printf("Invalid input. Please enter a number.\n");
             // Clear the input buffer to prevent an infinite loop
             while (getchar() != '\n');
             continue; // Skip to the next iteration
        }

        attempts++; // Increment the attempt counter with every valid guess

        if (guess > secret_number) {
            printf("Too high!\n");
        } else if (guess < secret_number) {
            printf("Too low!\n");
        } else {
            // Guessed correctly
            printf("Congratulations! You guessed the secret number (%d)!\n", secret_number);
            printf("It took you a total of %d attempts.\n", attempts);
            break; // Exit the while loop
        }
    }

    return 0;
}
