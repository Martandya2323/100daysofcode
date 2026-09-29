#include <stdio.h>
int main() {
    int num;

    // Ask the user for input
    printf("Enter an integer: ");
    
    // Read the integer from the user
    scanf("%d", &num);

    // Check if the number is perfectly divisible by 2
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } 
    else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}