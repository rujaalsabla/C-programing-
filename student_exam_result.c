/*
Name:Botu Sabla Galgalo
Reg no:ct100/g/26263/25
*/
#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;

    file = open("results.dat", "rb"); 
    if (file == NULL) {
        printf("Error opening results.dat!\n");
        return 1;
    }

    printf("Name\t\tRegNo\tMarks\n");
    printf("\n");

    while (fread(&s, sizeof(s), 1, file)) {
        printf("%s\t%d\t%.2f\n", s.name, s.regNo, s.marks);
    }

    close(file);
    return 0;
}
