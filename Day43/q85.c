#include <stdio.h>

void reverseString(char *str) {
    int length = 0;
    
    // Find the length of the string without using built-in functions
    while (str[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    
    // Swap characters from both ends moving inward
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    printf("Original: %s\n", myString);
    
    reverseString(myString);
    
    printf("Reversed: %s\n", myString);
    
    return 0;
}