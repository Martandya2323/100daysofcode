#include <stdio.h>
#include <math.h>
int main() {
    int num, firstDigit, lastDigit, digits, divisor, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;
    digits = (int)log10(num);
    divisor = (int)pow(10, digits);
    firstDigit = num / divisor;

    swappedNum = lastDigit * divisor;
    swappedNum += num % divisor;
    swappedNum -= lastDigit;
    swappedNum += firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}