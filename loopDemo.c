#include <stdio.h>

void main()
{

    int i, ub, lb, sum = 0, count = 0;

    printf("Enter the lower bound: ");
    scanf("%d", &lb);

    printf("Enter the upper bound: ");
    scanf("%d", &ub);

    /* if (lb % 2 == 0)
     {
         lb = lb + 1;
     }*/

    for (i = lb; i <= ub; i = i + 1)
    {
        if (i % 2 == 1)
        {
            sum = sum + i;
            count++;
        }
    }
    // printf("\b\b.");
    printf("\nSum = %d.\n", sum);
    printf("Count = %d\n", count);
    printf("Average = %.2f.\n", ((float)sum / count));
}