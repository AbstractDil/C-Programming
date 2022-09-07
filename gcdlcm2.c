/**
 *   GCD and LCM of two numbers
 */

#include <stdio.h>

void main()
{
    int a, b, gcd, i, lcm, mul, a1, b1;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    a1 = a;
    b1 = b;
    mul = a * b;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    gcd = a;
    printf("GCD of %d, %d is %d.\n", a1, b1, gcd);
    lcm = mul / gcd;
    printf("LCM of %d, %d is %d.\n", a1, b1, lcm);
}
