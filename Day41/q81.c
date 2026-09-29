#include <stdio.h>

int countCharacters(char *str) {
    int count = 0;
    
    // Loop until we reach the null-terminating character '\0'
    while (str[count] != '\0') {
        count++;
    }
    
    return count;
}

int main() {
    char myString[] = "Hello, World!";
    
    int length = countCharacters(myString);
    
    printf("The string \"%s\" contains %d characters.\n", myString, length);
    
    return 0;
}