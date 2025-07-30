#include <stdio.h>

void biggest3() {
    int a, b, c;

    // Input 3 numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare and find the biggest
    if (a >= b && a >= c) {
        printf("The biggest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The biggest number is: %d\n", b);
    } else {
        printf("The biggest number is: %d\n", c);
    }

   // return 0;
}

