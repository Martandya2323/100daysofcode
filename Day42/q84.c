#include <stdio.h>

void toUpperCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Shift ASCII value to uppercase
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello, World! 2026";
    
    printf("Original:  %s\n", myString);
    
    toUpperCase(myString);
    
    printf("Uppercase: %s\n", myString);
    
    return 0;
}