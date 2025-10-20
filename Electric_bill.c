/*
name:Botu Sabla
reg no:ct100/g/26263/25
#include <stdio.h>

/*
 * @brief Calculates the total electric bill based on units consumed.
 * * @param units The number of units consumed.
 * @return The total bill amount in KSh.
 */
double calculateElectricBill(int units) {
    double totalBill = 0.0;
    
    // First 100 units at KSh. 10 per unit
    if (units <= 100) {
        totalBill = units * 10.0;
    } 
    // Units between 101 and 200
    else if (units <= 200) {
        // Cost of the first 100 units
        totalBill = 100 * 10.0; 
        // Cost of the next units at KSh. 15
        int remainingUnits = units - 100;
        totalBill += remainingUnits * 15.0;
    } 
    // Units above 200
    else {
        // Cost of the first 100 units(1_100)
        totalBill = 100 * 10.0;//1000
        // Cost of the next 100 units (101-200)
        totalBill += 100 * 15.0;//1500
        
        // Cost of the remaining units (101_200)
        int remainingUnits = units - 200;
        totalBill += remainingUnits * 20.0;
    }
    
    return totalBill;
}

// Example Usage for Q1

int main() {
    int units1 = 80;
    int units2 = 150;
    int units3 = 250; // Example: Should be KSh. 3,500

    printf("Bill for %d units: KSh. %.2f\n", units1, calculateElectricBill(units1)); 
    // Output: 80 * 10 = 800.00
    
    printf("Bill for %d units: KSh. %.2f\n", units2, calculateElectricBill(units2)); 
    // Output: (100*10) + (50*15) = 1000 + 750 = 1750.00
    
    printf("Bill for %d units: KSh. %.2f\n", units3, calculateElectricBill(units3)); 
    // Output: (100*10) + (100*15) + (50*20) = 1000 + 1500 + 1000 = 3500.00
    
    return 0;
}

