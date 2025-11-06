/*
Name:Botu Sabla Galgalo
Reg no:ct100/g/26263/25
*/
#include <stdio.h>

int main() {
    FILE *file;
    float sale, total = 0;

    file = open("sales.txt", "r"); 
    if (file == NULL) {
        printf("Error opening sales.txt!\n");
        return 1;
    }

    while (scanf(file, "%f", &sale) == 1) {
        total += sale;
    }

    close(file);

    printf("Total sales for the day = %.2f\n", total);

    return 0;
}
