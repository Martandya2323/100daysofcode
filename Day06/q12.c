#include <stdio.h>
int main() {
    int num;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Outer if-else statement
    if (num != 0) {
        // Nested if-else statement
        if (num > 0) {
            printf("Positive\n");
        } else {
            printf("Negative\n");
        }
    } else {
        printf("Zero\n");
    }

    return 0;
}