/**
 *   Sum and average of prime numbers among numbers (input)
 */

#include <stdio.h>
#include <math.h>

int main()
{

    int i, flag = 1, sum = 0, no, lc, count = 0;
    float avg;

    printf("~~~Enter numbers (press -1) to stop~~~\n");

    while (1)
    {
        printf("Enter the number: ");
        scanf("%d", &no);
        if (no == -1)
        {
            break;
        }
        flag = 1;
        for (i = 2; i <= sqrt(no); ++i)
        {
            if (no % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            sum = sum + no;
            count++;
            // printf("%d th prime number %d\n", count, no);
            // printf("%d + ", no);
        }
    }

    printf("Sum = %d\n", sum);
    printf("Number of prime numbers: %d\n", count);
    avg = sum / count;
    printf("Average: %.2f\n", avg);
    // printf("\nSum of first 10 prime numbers : %d\n", sum);
}
