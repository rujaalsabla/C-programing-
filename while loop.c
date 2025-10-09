/*
name:Botu Sabla
reg no:ct100/g/26263/25
*/
#include <stdio.h>

int main() {
    double balance = 1000.00; // Starting balance
    double withdrawal_amount;

    printf("Welcome to the ATM Simulation.\n");
    printf("Your initial balance is $%.2f\n", balance);

    // Loop continues as long as the balance is strictly greater than 0
    while (balance > 0) {
        printf("\nEnter amount to withdraw (or enter 0 to stop): $");
        // Check if user input is successfully read
        if (scanf("%lf", &withdrawal_amount) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        // Check for early exit
        if (withdrawal_amount == 0) {
            printf("Transaction ended by user.\n");
            break;
        }

        // Check for valid withdrawal amount
        if (withdrawal_amount > 0) {
            if (withdrawal_amount <= balance) {
                // Perform the withdrawal
                balance -= withdrawal_amount;
                printf("Successful withdrawal of $%.2f.\n", withdrawal_amount);
                printf("Your new balance is $%.2f.\n", balance);
            } else {
                printf("Insufficient funds! Withdrawal failed.\n");
                printf("Current balance is $%.2f.\n", balance);
            }
        } else {
            printf("Invalid amount. Please enter a positive value.\n");
        }
    }

    // Final message when the loop condition (balance > 0) becomes false
    if (balance <= 0) {
        printf("\nAccount balance is zero or negative. Thank you for using the ATM.\n");
    }

    return 0;
}
