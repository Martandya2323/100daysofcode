#include <stdio.h>
int main() {
    double n1, n2, n3;

    // Prompt the user to enter three numbers
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // Compare n1 with n2 and n3
    if (n1 >= n2 && n1 >= n3) {
        printf("%.2f is the largest number.\n", n1);
    }
    // Compare n2 with n1 and n3
    else if (n2 >= n1 && n2 >= n3) {
        printf("%.2f is the largest number.\n", n2);
    }
    // If neither n1 nor n2 is the largest, n3 must be the largest
    else {
        printf("%.2f is the largest number.\n", n3);
    }

    return 0;
}