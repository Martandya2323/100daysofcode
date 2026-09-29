#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows

    for (i = n; i >= 1; i--) {
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}