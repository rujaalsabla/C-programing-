/*
name:Botu Sabla 
reg:ct100/26263/25
*/
#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
    // 1. Use a 1D array revenue[7] to store the daily revenues.
    float revenue[DAYS_IN_WEEK];
    float total_weekly_revenue = 0.0;

    printf("--- Hotel Weekly Revenue Tracker ---\n");

    // 2. Input the revenue for each day.
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("Enter revenue for Day %d: $", i + 1);
        if (scanf("%f", &revenue[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1; // Exit with an error code
        }
        // Calculate the total weekly revenue while taking input
        total_weekly_revenue += revenue[i];
    }

    // 3. Calculate and display results.
    
    // a. The total weekly revenue
    printf("\n--- Results ---\n");
    printf("The **total weekly revenue** is: $%.2f\n", total_weekly_revenue);
    
    // b. The average daily revenue
    float average_daily_revenue = total_weekly_revenue / DAYS_IN_WEEK;
    printf("The **average daily revenue** is: $%.2f\n", average_daily_revenue);

    return 0;
}