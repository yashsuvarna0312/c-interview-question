#include <stdio.h>

int main() {
    int a = 0, b = 1, count = 1;

    // Print the first 10 terms of the Fibonacci sequence
    do {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
        count++;
    } while (count <= 10);

    printf("\n");
    return 0;
}
