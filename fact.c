#include <stdio.h>

void factorial() {
    int n, i;
    unsigned long long factorial = 1;

    // Get input from user
    printf("\n\n Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n\n", n, factorial);
    }

  // return 0;
}

