#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // Assume the number is prime initially

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2 (numbers less than 2 are not prime)
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Loop from 2 to the square root of num to check for divisibility
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {  // If num is divisible by i, it's not prime
            isPrime = 0;
            break;
        }
    }

    // Output result based on the isPrime flag
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
