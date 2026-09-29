#include <stdio.h>

void countElements(int arr[], int size) {
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeros: %d\n", zero_count);
}

int main() {
    int numbers[] = {-5, 0, 3, -1, 0, 8, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    countElements(numbers, size);
    
    return 0;
}