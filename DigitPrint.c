// Print all the digits line by line

// Count number of digits

#include <stdio.h>

void main()
{
    int Mno, count = 0, r; // temp; //Mno = 345

    printf("Enter a number: ");
    scanf("%d", &Mno);
    // temp = Mno;

    if (Mno < 0)
    {
        Mno = -Mno;
    }

    while (Mno > 0)
    {
        r = Mno % 10;
        printf("%d\n", r); // sum = sum + r;
        count = count + 1;
        Mno = Mno / 10; // Mno = 32
    }

    printf("\nNumber of digits = %d\n", count);
}
