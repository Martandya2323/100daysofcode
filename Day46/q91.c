#include <stdio.h>
#include <ctype.h> // Required for tolower()

void removeVowels(char *str) {
    int i = 0;
    int j = 0;
    
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        
        // If the character is NOT a vowel, keep it
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    
    // Null-terminate the new shortened string
    str[j] = '\0';
}

int main() {
    char testStr[] = "Welcome to C Programming 2026!";
    
    printf("Original: %s\n", testStr);
    
    removeVowels(testStr);
    
    printf("Without Vowels: %s\n", testStr);
    
    return 0;
}