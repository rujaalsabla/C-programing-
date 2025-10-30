/*
name:Botu Sabla
reg:ct100/g/26263/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    // 1. Use a 3D array chain[3][5][10].
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];
    int total_occupied_rooms = 0;
    
    // Seed the random number generator
    srand(time(NULL)); 

    printf("--- Hotel Chain Occupancy Tracker ---\n");

    // 2. Assign random occupancy (1 or 0) to each room.
    for (int b = 0; b < BRANCHES; b++) {
        printf("\nBranch %d:\n", b + 1);
        int branch_occupied = 0;

        for (int f = 0; f < FLOORS; f++) {
            printf("  Floor %d: ", f + 1);

            for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
                // Assign random occupancy (0 or 1)
                chain[b][f][r] = rand() % 2; 
                printf("%d ", chain[b][f][r]);

                if (chain[b][f][r] == 1) {
                    total_occupied_rooms++;
                    branch_occupied++;
                }
            }
            printf("\n");
        }
        printf("  Total occupied rooms in Branch %d: %d\n", b + 1, branch_occupied);
    }

    // 3. Calculate and display the total number of occupied rooms across all branches.
    printf("\n--- Final Summary ---\n");
    printf("The **total number of occupied rooms across all branches** is: **%d**\n", total_occupied_rooms);

    return 0;
}
