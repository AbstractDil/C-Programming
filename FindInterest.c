/* This is a program to find the simple interest
    Write a program to input principal, roi and time and find simple interest.
*/

#include<stdio.h>

void main(){

    //variable declaration
    float principal = 1000.0, roi = 4.0;
    int time = 5;

    float interest;

    //Input data to the program
    printf("Enter principal amount: ");
    scanf("%f",&principal);

    printf("Enter rate of interest: ");
    scanf("%f",&roi);

    printf("Enter the time: ");
    scanf("%d",&time);


    //Processing the data
    interest = ( principal * roi * time ) / 100 ;


    //printing the result
    printf("The simple interest is %.2f.\n", interest);

}
