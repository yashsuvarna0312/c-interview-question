#include <stdio.h>

int main() {
    int num;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the entered number is positive
    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;  // Exit the program if the input is not positive
    }

    // Print the multiplication table for the number from 1 to 10
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
