/*
Name:Botu Sabla Galgalo
Reg no:ct100/g/26263/25
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin); 

    fprintf(file, "%s", title); 
    fclose(file);

    printf("Book title stored successfully!\n");

    return 0;
}
