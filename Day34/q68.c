#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5; // Current number of elements
    int pos = 2; // Position of the element to delete (0-indexed, deleting index 2, which is 30)

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Shift elements to the left starting from the deletion position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement array size
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}