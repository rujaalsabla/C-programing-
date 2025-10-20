/*
name:Botu Sabla
reg no:ct100/g/26263/25
#include <stdio.h>

/*
 * @brief Calculates the total fare for a given distance.
 * * @param distance The distance traveled in kilometers.
 * @return The total fare amount in KSh.
 */
double calculateFare(double distance) {
    const double RATE_PER_KM = 50.0; // KSh. 50 per kilometer
    
    // Total Fare = Distance * Rate per KM
    double totalFare = distance * RATE_PER_KM;
    
    return totalFare;
}

// Example Usage for Q2

int main() {
    double distance1 = 5.0;
    double distance2 = 10.0; // Example: Should return 500

    printf("Fare for %.1f km: KSh. %.2f\n", distance1, calculateFare(distance1)); 
    // Output: 5.0 * 50 = 250.00
    
    printf("Fare for %.1f km: KSh. %.2f\n", distance2, calculateFare(distance2)); 
    // Output: 10.0 * 50 = 500.00
    
    return 0;
}

