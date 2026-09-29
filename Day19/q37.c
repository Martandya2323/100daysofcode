#include <stdio.h>
// Function to find the greatest common divisor (GCD)
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the least common multiple (LCM)
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b; // Divided first to prevent overflow
}

int main() {
    long long num1, num2;

    printf("Enter two integers: ");
    if (scanf("%lld %lld", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers by taking their absolute values
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    printf("LCM of %lld and %lld is %lld\n", num1, num2, lcm(num1, num2));

    return 0;
}