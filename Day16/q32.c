#include <stdio.h>
int main() {
    int n, reversed = 0, remainder, original;
    
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) return 0;
    
    original = n;
    
    // Negative numbers are generally not considered palindromes
    if (n < 0) {
        printf("%d is not a palindrome.\n", original);
        return 0;
    }
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    
    return 0;
}