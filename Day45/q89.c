#include <stdio.h>

int countFrequency(char *str, char target) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == target) {
            count++;
        }
        i++;
    }
    return count;
}

int main() {
    char test[] = "programming";
    char target = 'g';
    
    int freq = countFrequency(test, target);
    printf("String: \"%s\", Target: '%c'\n", test, target);
    printf("Frequency: %d\n\n", freq);
    
    return 0;
}