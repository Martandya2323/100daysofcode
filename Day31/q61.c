#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if the element is not in the array
}

int main() {
    int arr[] = {10, 23, 45, 70, 11, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}