// Write a program to check whether a number is odd or even.
#include<stdio.h>
void main(){
 int a;
 printf("Enter a number: ");
 scanf("%d", &a);
 if(a%2 == 0)
 printf("This is a even number");
 else
 printf("This is a Odd number.");
}