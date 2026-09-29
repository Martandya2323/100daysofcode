#include <stdio.h>
#include <ctype.h> // Required for isspace(), isdigit(), and isalpha()

void countStringComponents(char *str, int *spaces, int *digits, int *special) {
    *spaces = 0;
    *digits = 0;
    *special = 0;
    
    int i = 0;
    while (str[i] != '\0') {
        if (isspace(str[i])) {
            (*spaces)++;
        } 
        else if (isdigit(str[i])) {
            (*digits)++;
        } 
        else if (!isalpha(str[i])) {
            // If it's not a space, digit, or alphabetical letter, it's a special character/punctuation
            (*special)++;
        }
        i++;
    }
}

int main() {
    char testStr[] = "Learn C in 2026! #Code";
    int spaces = 0, digits = 0, special = 0;
    
    countStringComponents(testStr, &spaces, &digits, &special);
    
    printf("String: \"%s\"\n", testStr);
    printf("Spaces:            %d\n", spaces);
    printf("Digits:            %d\n", digits);
    printf("Special Characters:%d\n", special);
    
    return 0;
}