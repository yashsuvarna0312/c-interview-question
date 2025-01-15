#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask the user to enter the number of rows
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop to print the asterisks in each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
