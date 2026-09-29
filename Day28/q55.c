#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void printPrimes(int n) {
    if (n < 2) {
        printf("No prime numbers in this range.\n");
        return;
    }

    printf("Prime numbers from 1 to %d: ", n);
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        int limit = (int)sqrt(num);
        
        for (int i = 2; i <= limit; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int n = 50;
    printPrimes(n);
    return 0;
}