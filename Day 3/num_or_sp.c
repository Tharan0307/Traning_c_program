#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to skip whitespace

    if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("It is an alphabet.\n");
    } else {
        printf("It is a special character.\n");
    }

    return 0;
}
