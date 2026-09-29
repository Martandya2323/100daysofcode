#include <stdio.h>

char findFirstRepeatingLowercase(char *str) {
    // Frequency array for 26 lowercase letters, initialized to 0
    int freq[26] = {0};
    
    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        
        // Process only lowercase alphabets
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            
            // The moment a character's frequency hits 2, it's the first repeating one
            if (freq[ch - 'a'] == 2) {
                return ch;
            }
        }
        i++;
    }
    
    return '\0'; // Return null character if no lowercase letter repeats
}

int main() {
    char test1[] = "geeksforgeeks";
    char test2[] = "abccba";
    char test3[] = "abcdxyz";
    
    char res1 = findFirstRepeatingLowercase(test1);
    char res2 = findFirstRepeatingLowercase(test2);
    char res3 = findFirstRepeatingLowercase(test3);
    
    printf("\"%s\" -> First repeating: %s\n", test1, res1 ? (char[]){res1, '\0'} : "None");
    printf("\"%s\" -> First repeating: %s\n", test2, res2 ? (char[]){res2, '\0'} : "None");
    printf("\"%s\" -> First repeating: %s\n", test3, res3 ? (char[]){res3, '\0'} : "None");
    
    return 0;
}