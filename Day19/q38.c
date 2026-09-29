#include <stdio.h>
// Function to find the sum of digits
long long sumOfDigits(long long n) {
    long long sum = 0;
    while (n != 0) {
        sum += n % 10; // Extract the last digit and add it to sum
        n /= 10;       // Remove the last digit
    }
    return sum;
}

int main() {
    long long num;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers by taking their absolute value
    if (num < 0) {
        num = -num;
    }

    printf("Sum of digits is %lld\n", sumOfDigits(num));

    return 0;
}