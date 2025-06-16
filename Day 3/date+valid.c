#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    if (year >= 1 && month >= 1 && month <= 12 && day >= 1 && day <= 31) {
        // Check months with 30 days
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            printf("Invalid date.\n");
        }
        // Check February
        else if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                if (day > 29)
                    printf("Invalid date.\n");
                else
                    printf("Valid date.\n");
            } else {
                if (day > 28)
                    printf("Invalid date.\n");
                else
                    printf("Valid date.\n");
            }
        }
        // All other valid dates
        else {
            printf("Valid date.\n");
        }
    } else {
        printf("Invalid date.\n");
    }

    return 0;
}
