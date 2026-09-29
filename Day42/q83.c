#include <stdio.h>
#include <ctype.h> // Required for isalpha() and tolower()

void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    
    int i = 0;
    while (str[i] != '\0') {
        char ch = tolower(str[i]); // Convert to lowercase to check easily
        
        // Check if the character is a letter
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        i++;
    }
}

int main() {
    char myString[] = "Hello, World! 2026";
    int vowels = 0, consonants = 0;
    
    countVowelsAndConsonants(myString, &vowels, &consonants);
    
    printf("String: \"%s\"\n", myString);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}