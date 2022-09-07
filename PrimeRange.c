/**
 *   Sum and average of prime numbers between range
 */

#include <stdio.h>
#include <math.h>

int main()
{

    int i, flag = 1, sum = 0, ub, lb, no, count = 0;
    float avg;

    printf("Enter lower bound: ");
    scanf("%d", &lb);
    printf("Enter upper bound: ");
    scanf("%d", &ub);
    // lb = 30;
    // ub = 100;

    for (no = lb; no <= ub; no++)
    {
        flag = 1;
        for (i = 2; i <= sqrt(no); ++i)
        {
            if (no % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            sum = sum + no;
            count++;
            // printf("%d th prime number %d\n", count, no);
            printf("%d + ", no);
        }
    }

    printf("\b\b= %d\n", sum);
    printf("Number of prime numbers: %d\n", count);
    avg = sum / count;
    printf("Average: %.2f\n", avg);
    // printf("\nSum of first 10 prime numbers : %d\n", sum);
}
