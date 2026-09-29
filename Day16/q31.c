#include <stdio.h>
void printBinary(unsigned int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    unsigned int num;
    printf("Enter a positive integer: ");
    if (scanf("%u", &num) == 1) {
        printf("Binary equivalent: ");
        if (num == 0) {
            printf("0");
        } else {
            printBinary(num);
        }
        printf("\n");
    }
    return 0;
}