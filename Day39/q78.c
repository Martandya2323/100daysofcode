#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n = 3; // Size of the matrix (n x n)
    int matrix[MAX_SIZE][MAX_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }; // Main diagonal: 1, 5, 9

    int sum = 0;
    
    // Traverse the main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum); // Output: 15 (1 + 5 + 9)

    return 0;
}