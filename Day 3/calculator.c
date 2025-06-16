#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case '/':
            if(b != 0) {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
