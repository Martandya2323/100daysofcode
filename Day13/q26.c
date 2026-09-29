#include <stdio.h>
int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("Numbers from 1 to %d:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}