#include <stdio.h>
int main() {
    int num, originalNum, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        
        // Calculate factorial of the digit
        int factorial = 1;
        for (int i = 1; i <= remainder; i++) {
            factorial *= i;
        }
        
        sum += factorial;
        num /= 10;
    }

    if (sum == originalNum && originalNum > 0) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}