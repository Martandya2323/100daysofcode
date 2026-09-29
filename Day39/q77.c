#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

bool areDiagonalElementsDistinct(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Traverse each diagonal element matrix[i][i]
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If any two diagonal elements are equal, they are not distinct
            if (matrix[i][i] == matrix[j][j]) {
                return false;
            }
        }
    }
    return true; // All diagonal elements are distinct
}

int main() {
    int matrixDistinct[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; // Diagonal: 1, 5, 9 (Distinct)

    int matrixDuplicate[3][3] = {
        {1, 2, 3},
        {4, 1, 6},
        {7, 8, 9}
    }; // Diagonal: 1, 1, 9 (Not distinct)

    if (areDiagonalElementsDistinct(matrixDistinct, 3)) {
        printf("matrixDistinct: True\n");
    } else {
        printf("matrixDistinct: False\n");
    }

    if (areDiagonalElementsDistinct(matrixDuplicate, 3)) {
        printf("matrixDuplicate: True\n");
    } else {
        printf("matrixDuplicate: False\n");
    }

    return 0;
}