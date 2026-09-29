#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}