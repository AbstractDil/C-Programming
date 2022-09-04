// Armstrong Number program using C  by Sagar Nandy

#include<stdio.h>
#include<math.h>
int main()
{

     int No, Rem, Total = 0 , Temp, Count; 

     printf("Enter a number : ");

     scanf("%d", &No);

     Temp = No;

     // first count 

     while(Temp != 0){
        
        Temp = Temp / 10;
        
        ++Count;
     }

Temp = No;

     while(Temp > 0){

        Rem = Temp % 10;

        Total = Total + pow(Rem,Count);

        Temp = Temp / 10;
     }

     if(Total == No)
     {
        printf("This is an Armstrong number." );
     }

     else{
        printf("This is not an Armstrong number.");

     }

     return 0 ; 
}
