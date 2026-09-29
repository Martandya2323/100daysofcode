#include <stdio.h>

void printCharactersOnNewLine(char *str) {
    int i = 0;
    // Loop until we reach the null-terminating character '\0'
    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }
}

int main() {
    char myString[] = "Hello";
    
    printCharactersOnNewLine(myString);
    
    return 0;
}