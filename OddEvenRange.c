// Odd even between a range

#include <stdio.h>

void main()
{

    int lb, ub, i;

    printf("Enter the range: ");
    scanf("%d%d", &lb, &ub);

    printf("Printing Odd Numbers: ");
    for (i = lb; i <= ub; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\b\b.");

    printf("\nPrinting Even Numbers:");
    for (i = lb; i <= ub; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d, ", i);
        }
    }
    printf("\b\b.");
}
