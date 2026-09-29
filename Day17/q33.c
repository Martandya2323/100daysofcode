#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate the sum of nth power of digits
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    // Check if the result equals the original number
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}