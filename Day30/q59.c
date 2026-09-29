#include <stdio.h>

void countEvenOdd(int arr[], int size) {
    int even_count = 0;
    int odd_count = 0;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    countEvenOdd(numbers, size);
    
    return 0;
}