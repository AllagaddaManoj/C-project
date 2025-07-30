#include <stdio.h>

void palindrome() {
    int num, reversed = 0, remainder, original;

    printf("\n\n Enter a number to check palindrome: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n\n", original);
}

