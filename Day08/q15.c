#include <stdio.h>
int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase alphabet.\n", ch);
    }
    // Check if the character is a lowercase alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    }
    // If it's none of the above, it must be a special character
    else {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}