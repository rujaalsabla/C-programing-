/*
name:Botu Sabla
reg:ct100/g/26263/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    // 1. Use a 2D array occupancy[5][10].
    int occupancy[FLOORS][ROOMS_PER_FLOOR];
    int total_occupied = 0;
    int total_vacant = 0;

    // Seed the random number generator
    srand(time(NULL)); 

    printf("--- Hotel Room Occupancy Tracker (One Branch) ---\n");

    // 2. Input random occupancy data (or simulate input).
    printf("Simulating occupancy for 5 floors (0=Vacant, 1=Occupied):\n");

    for (int f = 0; f < FLOORS; f++) {
        int floor_occupied = 0;
        int floor_vacant = 0;
        
        printf("Floor %d: ", f + 1);

        for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
            // Assign random occupancy (0 or 1)
            occupancy[f][r] = rand() % 2; 
            
            // Display and count
            printf("%d ", occupancy[f][r]);

            if (occupancy[f][r] == 1) {
                floor_occupied++;
            } else {
                floor_vacant++;
            }
        }

        // 3. Display the number of occupied and vacant rooms per floor.
        printf(" (Occupied: %d, Vacant: %d)\n", floor_occupied, floor_vacant);
        
        total_occupied += floor_occupied;
        total_vacant += floor_vacant;
    }

    printf("\n--- Summary ---\n");
    printf("Total Occupied Rooms across all floors: **%d**\n", total_occupied);
    printf("Total Vacant Rooms across all floors: **%d**\n", total_vacant);

    return 0;
}
