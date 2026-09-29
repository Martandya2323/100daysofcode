#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

void diagonalTraversal(int matrix[ROWS][COLS]) {
    int r = 0, c = 0;
    int direction = 1; // 1 means moving up-right, -1 means moving down-left
    int total_elements = ROWS * COLS;

    printf("Diagonal Traversal: ");
    
    for (int i = 0; i < total_elements; i++) {
        printf("%d ", matrix[r][c]);

        if (direction == 1) {
            // Moving up-right
            if (c == COLS - 1) {
                r++;
                direction = -1; // Switch to down-left
            } else if (r == 0) {
                c++;
                direction = -1; // Switch to down-left
            } else {
                r--;
                c++;
            }
        } else {
            // Moving down-left
            if (r == ROWS - 1) {
                c++;
                direction = 1; // Switch to up-right
            } else if (c == 0) {
                r++;
                direction = 1; // Switch to up-right
            } else {
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    diagonalTraversal(matrix);
    return 0;
}