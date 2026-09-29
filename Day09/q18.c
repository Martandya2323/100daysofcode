#include <stdio.h>
int main() {
    float percentage;

    // Prompt user for input
    printf("Enter the percentage (0-100): ");
    if (scanf("%f", &percentage) != 1) {
        printf("Error: Invalid input. Please enter a number.\n");
        return 1;
    }

    // Input validation for plausible range
    if (percentage < 0.0 || percentage > 100.0) {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 1;
    }

    // Conditional logic to determine and print the grade
    if (percentage >= 90.0) {
        printf("Grade: A\n");
    } else if (percentage >= 80.0) {
        printf("Grade: B\n");
    } else if (percentage >= 70.0) {
        printf("Grade: C\n");
    } else if (percentage >= 60.0) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
