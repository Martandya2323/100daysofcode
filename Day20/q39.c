#include <stdio.h>
int main() {
    long long num;
    long long product = 1;
    int has_odd = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        printf("The product of odd digits is: 0\n");
        return 0;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        num /= 10;
    }

    if (has_odd) {
        printf("The product of odd digits is: %lld\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}