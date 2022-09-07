#include <stdio.h>
#include <math.h>

int main()
{

    int no, i, count = 0, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &no);

    // Print all the factors of 'no', counting number of factors.
    // printf("The factors are....\n");
    for (i = 2; i <= sqrt(no); ++i)
    {
        if (no % i == 0)
        {
            // count++;
            // printf("%d, ",i);
            flag = 0;
            // printf("\n%d\n",i);
            break;
        }
    }

    // printf("\nThe number of factors = %d\n", count);

    if (flag)
    {
        printf("%d is a prime number.", no);
    }
    else
        printf("%d is not a prime number.", no);
}
