#include <stdio.h>
#include <stdlib.h>

int findMostFrequentDigit(long long num) {
    // Handle negative numbers by converting to positive
    num = llabs(num);
    
    int freq[10] = {0}; // Array to store frequency of digits 0-9
    
    // Edge case for 0
    if (num == 0) {
        return 0;
    }
    
    // Count occurrences of each digit
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    // Find the digit with the maximum frequency
    int maxFreq = -1;
    int mostFrequentDigit = -1;
    
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }
    
    return mostFrequentDigit;
}

int main() {
    long long number = 112233344;
    
    int result = findMostFrequentDigit(number);
    printf("The digit that occurs the most is: %d\n", result);
    
    return 0;
}