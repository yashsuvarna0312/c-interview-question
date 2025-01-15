#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is a non-negative integer
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Using a while loop to calculate the factorial
    int i = num;
    while (i > 1) {
        factorial *= i;  // Multiply factorial by i
        i--;              // Decrement i by 1
    }

    // Print the calculated factorial
    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}
