#include <stdio.h>

void main()
{
    char ch;

    // Input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Alphabet Checking
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        //Vowel Checking
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is Vowel.\n", ch);
        }
        else
        {
            printf("%c is Consonent.\n", ch);
        }
    }
    else{
        printf("%c is not an alphabet.\n", ch);
    }
}