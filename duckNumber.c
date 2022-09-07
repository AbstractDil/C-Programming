/**
 *  check whether a number is a duck number or not
 *
 * @author Riman
 */

#include <stdio.h>

void main()
{
    int Mno, flag = 0, r, temp; // Mno = 345

    printf("Enter a number: ");
    scanf("%d", &Mno);
    temp = Mno;

    if (temp < 0)
    {
        temp = -temp;
    }

    while (temp > 0)
    {
        r = temp % 10;
        if (r == 0)
        {
            flag = 1;
            break;
        }
        temp = temp / 10;
    }

    if (flag)
    {
        printf("%d is a duck number.", Mno);
    }
    else
    {
        printf("%d is a not duck number.", Mno);
    }
}