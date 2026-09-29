#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0; // Initialize sum to 0

    // 1. Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // 2. Read elements and simultaneously add them to 'sum'
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
            // Add the current element to the total sum
            sum += matrix[i][j]; 
        }
    }

    // 3. Print the matrix (optional, for visualization)
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    // 4. Output the final sum
    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}