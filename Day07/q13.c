#include <stdio.h>
int main() {
    int year;

    // Ask the user to input a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic
    // A year is a leap year if it is perfectly divisible by 400
    // OR if it is perfectly divisible by 4 AND NOT divisible by 100
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}