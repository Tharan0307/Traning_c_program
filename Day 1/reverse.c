#include <stdio.h>

int main() {
    int number, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;           // Get last digit
        reversed = reversed * 10 + digit; // Build reversed number
        number = number / 10;          // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
