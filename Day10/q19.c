#include <stdio.h>
int main() {
    double side1, side2, side3;

    // Prompt user for input
    printf("Enter the lengths of the three sides: ");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Error: Invalid numerical input.\n");
        return 1;
    }

    // Validation: Check if sides are greater than zero
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("The sides must be greater than zero.\n");
    }
    // Validation: Check the Triangle Inequality Theorem
    else if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("The given sides do not form a valid triangle.\n");
    }
    // Logic: Check for Equilateral Triangle
    else if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    }
    // Logic: Check for Isosceles Triangle
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    }
    // Logic: If not Equilateral or Isosceles, it must be Scalene
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}
