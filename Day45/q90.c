#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char test[] = "Hello World!";
    printf("Original: %s\n", test);
    toggleCase(test);
    printf("Toggled:  %s\n", test);
    
    return 0;
}