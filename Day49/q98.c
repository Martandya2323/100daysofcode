#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, start, lastSpace;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    lastSpace = 0;

    
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Initials with surname: ");

  
    printf("%c", name[0]);

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
            printf(" %c", name[i + 1]);
    }

    
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}