/* Count number of digits program using C by Sagar Nandy */
#include<stdio.h>
int main()
{
    int No, count = 0;
    printf("Enter number :");
    scanf("%d", &No);

    while (No != 0)
    {
        No = No/10;
        count++;
    }

    printf("The number of digits are : %d",count);  
    return 0;
    

}