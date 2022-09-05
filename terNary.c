#include<stdio.h>

int main()
{
    int a,z ;
    printf("Enter the number = ",a);
    scanf("%d",&a);
  //  z=(a%2==0 && 0)?(a>10)? a :a+1 :(a<10) ? a :a-1;
  //  printf("z= %d",z);
if(a%2==0 && 0) // if a is even and 0 is true
    {
        if(a>10) // if a is greater than 10
        {
            z=a; // z=a
        }
        else
        {
            z=a+1; // z=a+1
        }
    }
    else
    {
        if(a<10) // if a is less than 10
        {
            z=a; // z=a
        }
        else
        {
            z=a-1; // z=a-1
        }

    }

     
    printf("z= %d",z);
}