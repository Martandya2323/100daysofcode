#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows]; // Array to store the sum of each row

    // 2. Read elements into the matrix
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate the sum of each row
    for (int i = 0; i < rows; i++) {
        int current_row_sum = 0; // Reset sum for the new row
        for (int j = 0; j < cols; j++) {
            current_row_sum += matrix[i][j];
        }
        rowSums[i] = current_row_sum; // Store the total in the array
    }

    // 4. Print the matrix and the corresponding row sums
    printf("\nMatrix and Row Sums:\n");
    for (int i = 0; i < rows; i++) {
        // Print the row elements
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]);
        }
        // Print the stored sum for this row
        printf("| Sum = %d\n", rowSums[i]);
    }

    return 0;
}