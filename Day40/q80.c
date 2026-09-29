#include <stdio.h>

#define R1 2 // Rows of Matrix 1
#define C1 3 // Columns of Matrix 1 (Must match R2)
#define R2 3 // Rows of Matrix 2
#define C2 2 // Columns of Matrix 2

void multiplyMatrices(int first[R1][C1], int second[R2][C2], int result[R1][C2]) {
    // Step 1: Initialize the result matrix elements to 0
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
        }
    }

    // Step 2: Perform multiplication using three nested loops
    for (int i = 0; i < R1; i++) {         // Rows of first matrix
        for (int j = 0; j < C2; j++) {     // Columns of second matrix
            for (int k = 0; k < C1; k++) { // Common dimension
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Matrix 1 (2x3)
    int first[R1][C1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Matrix 2 (3x2)
    int second[R2][C2] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };

    // Resultant Matrix (2x2)
    int result[R1][C2];

    multiplyMatrices(first, second, result);

    printf("Resultant Matrix:\n");
    printMatrix(R1, C2, result);

    return 0;
}