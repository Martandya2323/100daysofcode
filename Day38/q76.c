#include <stdio.h>

int main() {
    int n = 3; 
    int mat[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 9}
    };
    
    int isSymmetric = 1; // Assume it is symmetric initially

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0; // Found a mismatch
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}