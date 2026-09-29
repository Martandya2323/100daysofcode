#include <stdio.h>
int main() {
    int n, i;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("The first %d odd numbers are: ", n);
        for (i = 1; i <= n; i++) {
            int odd = 2 * i - 1;
            printf("%d ", odd);
            sum += odd;
        }
        printf("\nSum of the first %d odd numbers = %d\n", n, sum);
    }

    return 0;
}