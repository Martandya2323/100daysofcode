#include <stdio.h>
#include <string.h>
int main() {
    char binary[100];

    printf("Enter a binary number: ");
    if (scanf("%99s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Error: Not a valid binary number.\n");
            return 1;
        }
    }

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }

    printf("The 1's complement is: %s\n", binary);

    return 0;
}