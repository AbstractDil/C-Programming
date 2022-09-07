#include <stdio.h>

void main()
{
    char ch;

    // Input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Vowel Checking
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        switch (ch)
        {
        case 'a':
        case 'A':
        case 'E':
        case 'e':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("%c is Vowel.\n", ch);
            break;
        default:
            printf("%c is Consonent.\n", ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }
}