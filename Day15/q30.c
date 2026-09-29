#include <stdio.h>
int main() {
    int num, reversed_num = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int original_num = num; // Store the original number for display

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number of %d = %d\n", original_num, reversed_num);

    return 0;
}