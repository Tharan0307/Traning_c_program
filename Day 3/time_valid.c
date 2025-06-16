#include <stdio.h>

int main() {
    int hour, minute, second;

    printf("Enter time (HH MM SS): ");
    scanf("%d %d %d", &hour, &minute, &second);

    if ((hour >= 0 && hour <= 23) &&
        (minute >= 0 && minute <= 59) &&
        (second >= 0 && second <= 59)) {
        printf("The time %02d:%02d:%02d is valid.\n", hour, minute, second);
    } else {
        printf("Invalid time.\n");
    }

    return 0;
}
