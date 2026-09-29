#include <stdio.h>

// Function to insert an element into a sorted array
// Returns the new size of the array
int insertSorted(int arr[], int size, int capacity, int element) {
    // Check if the array has reached its maximum capacity
    if (size >= capacity) {
        printf("Error: Array capacity exceeded!\n");
        return size;
    }
    
    // Find the position where the element should be inserted
    int i = size - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i]; // Shift elements to the right
        i--;
    }
    
    // Insert the element at the correct position
    arr[i + 1] = element;
    
    return size + 1; // Return updated size
}

int main() {
    int capacity = 20; // Maximum capacity of the array
    int arr[20] = {2, 5, 8, 12, 16, 23, 38};
    int size = 7;      // Current number of elements
    int elementToInsert = 15;
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    size = insertSorted(arr, size, capacity, elementToInsert);
    
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}