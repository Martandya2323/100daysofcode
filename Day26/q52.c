#include <stdio.h>

int main() {
    int rows[] = {1, 3, 5, 3, 1};
    int num_rows = 5;

    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < rows[i]; j++) {
            printf("*\n");
        }
        if (i < num_rows - 1) {
            printf("\n");
        }
    }

    return 0;
}