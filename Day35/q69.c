#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return -1;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element (all elements might be identical).\n");
        return -1;
    }

    return second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int second_largest = findSecondLargest(arr, n);
    if (second_largest != -1) {
        printf("The second largest element is %d\n", second_largest);
    }
    
    return 0;
}