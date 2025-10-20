/*
name:Botu Sabla
reg no:ct100/g/26263/25
#include <stdio.h>

/*
 * @brief Converts a temperature from Fahrenheit to Celsius.
 * * @param fahrenheit The temperature in degrees Fahrenheit (F).
 * @return The temperature in degrees Celsius (C).
 */
double convertToCelsius(double fahrenheit) {
    // Formula: C = (F - 32) * 5/9
    double celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    
    return celsius;
}

// Example Usage for Q3

int main() {
    double fahr1 = 98.6; // Example: Should be approximately 37C
    double fahr2 = 32.0; 
    double fahr3 = 212.0;

    printf("%.1f°F is approximately %.2f°C\n", fahr1, convertToCelsius(fahr1)); 
    // Output: 98.6°F is approximately 37.00°C
    
    printf("%.1f°F is approximately %.2f°C\n", fahr2, convertToCelsius(fahr2)); 
    // Output: 32.0°F is approximately 0.00°C
    
    printf("%.1f°F is approximately %.2f°C\n", fahr3, convertToCelsius(fahr3)); 
    // Output: 212.0°F is approximately 100.00°C
    
    return 0;
}

