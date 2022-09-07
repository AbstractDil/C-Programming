// Armstrong number Check

#include <stdio.h>
#include <math.h>

void main()
{
    int no, sum = 0, r, p = 0, temp, ub, lb; // Mno = 345

    // Input the range
    printf("Enter the lower range: ");
    scanf("%d", &lb);
    printf("Enter the upper range: ");
    scanf("%d", &ub);

    printf("The following numbers are  Armstrong between %d and %d: \n", lb, ub);
    for (no = lb; no <= ub; no++)
    {
        if (no < 0)
            continue;

        temp = no;
        // Count number of digits
        p = 0;
        while (temp > 0)
        {
            p = p + 1;
            temp = temp / 10;
        }

        // Find the sum of digits powered to p
        sum = 0;
        temp = no;
        while (temp > 0)
        {
            r = temp % 10;
            sum = sum + pow(r, p);
            temp = temp / 10;
        }

        if (no == sum)
        {
            printf("%d\n", no);
        }
    }
}
