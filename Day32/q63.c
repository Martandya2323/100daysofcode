#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = 3;
    
    int arr2[] = {4, 5, 6, 7};
    int size2 = 4;
    
    int mergedSize = size1 + size2;
    int merged[mergedSize];
    
    // Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    
    // Copy elements from the second array
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }
    
    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}