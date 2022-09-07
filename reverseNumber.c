// Reverse a multi digit

// Print all the digits line by line

// Count number of digits

#include <stdio.h>

void main()
{
    int Mno, reverse = 0, r, temp; // Mno = 345

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
        reverse = reverse * 10 + r;
        temp = temp / 10; // Mno = 32
    }

    if (Mno < 0)
    {
        reverse = -reverse;
    }
    printf("\nThe Reversed of %d = %d\n", Mno, reverse);
}
