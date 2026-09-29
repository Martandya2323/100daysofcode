#include <stdio.h>
int main() {
    int n, i;
    long long product = 1;
    int has_even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no even numbers between 1 and %d.\n", n);
    } else {
        printf("Even numbers from 1 to %d: ", n);
        for (i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                product *= i;
                has_even = 1;
            }
        }
        
        if (has_even) {
            printf("\nProduct of even numbers from 1 to %d = %lld\n", n, product);
        } else {
            printf("\nNo even numbers found.\n");
        }
    }

    return 0;
}