#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char *str1, char *str2) {
    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Frequency array for all 256 ASCII characters
    int count[256] = {0};

    // Increment count for characters in str1, decrement for str2
    for (int i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // Check if all frequency counts are zero
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}