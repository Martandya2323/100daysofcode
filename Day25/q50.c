#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5; // Number of rows

    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = i; k <= n; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}