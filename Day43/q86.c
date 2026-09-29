#include <stdio.h>
#include <ctype.h> // Required for isalnum() and tolower()

int isPalindrome(char *str) {
    int left = 0;
    int right = 0;
    
    // Find the end index of the string
    while (str[right] != '\0') {
        right++;
    }
    right--; // Move back from '\0' to the last valid character
    
    while (left < right) {
        // Skip non-alphanumeric characters from the left
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        // Skip non-alphanumeric characters from the right
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        
        // Compare characters case-insensitively
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome (false)
        }
        
        left++;
        right--;
    }
    
    return 1; // Is a palindrome (true)
}

int main() {
    char str1[] = "Racecar";
    char str2[] = "A man, a plan, a canal: Panama";
    char str3[] = "Hello, World!";
    
    printf("\"%s\" -> %s\n", str1, isPalindrome(str1) ? "Palindrome" : "Not a Palindrome");
    printf("\"%s\" -> %s\n", str2, isPalindrome(str2) ? "Palindrome" : "Not a Palindrome");
    printf("\"%s\" -> %s\n", str3, isPalindrome(str3) ? "Palindrome" : "Not a Palindrome");
    
    return 0;
}