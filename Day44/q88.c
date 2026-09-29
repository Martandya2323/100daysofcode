#include <stdio.h>

void replaceSpaces(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }
}

int main() {
    char test[] = "Hello World From C";
    printf("Before: %s\n", test);
    replaceSpaces(test);
    printf("After:  %s\n\n", test);
    
    return 0;
}