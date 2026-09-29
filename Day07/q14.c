#include <stdio.h>

int main() {
    char ch;
    int isLowercaseVowel, isUppercaseVowel;

    // Ask the user to input a character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Evaluate to 1 (true) if ch is a lowercase vowel
    isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    // Evaluate to 1 (true) if ch is an uppercase vowel
    isUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    // First, check if the input is actually an alphabet letter
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        // Check if it matches any vowel condition
        if (isLowercaseVowel || isUppercaseVowel) {
            printf("%c is a vowel.\n", ch);
        } else {
            // If it's an alphabet but not a vowel, it must be a consonant
            printf("%c is a consonant.\n", ch);
        }
        
    } else {
        // Handle cases where the user inputs numbers or special characters
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}