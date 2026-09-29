#include <stdio.h>

void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    
    while (left < right) {
        // Swap elements at left and right pointers
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        // Move pointers toward the center
        left++;
        right--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}