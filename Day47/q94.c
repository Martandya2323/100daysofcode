#include <stdio.h>
#include <string.h>

void findLongestWord(char *sentence) {
    int maxLen = 0;
    int currentLen = 0;
    int startIndex = 0;
    int maxStartIndex = 0;

    int i = 0;
    while (1) {
        // A word ends if we encounter a space, tab, newline, or the string terminator ('\0')
        if (sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n' && sentence[i] != '\0') {
            if (currentLen == 0) {
                startIndex = i; // Mark the beginning of a new word
            }
            currentLen++;
        } else {
            // Check if the word we just finished is the longest
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIndex = startIndex;
            }
            currentLen = 0; // Reset for the next word
        }

        if (sentence[i] == '\0') {
            break;
        }
        i++;
    }

    if (maxLen > 0) {
        printf("The longest word is: \"");
        // Print only the characters of the longest word
        for (int j = 0; j < maxLen; j++) {
            putchar(sentence[maxStartIndex + j]);
        }
        printf("\"\nLength: %d\n", maxLen);
    } else {
        printf("No words found in the sentence.\n");
    }
}

int main() {
    char sentence[] = "Programming in C is both challenging and rewarding.";
    
    printf("Sentence: \"%s\"\n", sentence);
    findLongestWord(sentence);

    return 0;
}