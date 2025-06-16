#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;  // Store a in temp
    a = b;     // Assign b to a
    b = temp;  // Assign temp (original a) to b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
