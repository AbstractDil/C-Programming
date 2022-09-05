#include<stdio.h>
int main(){

// max two number using ternary operator
    int a,b,max,maximum;
    printf("Enter first number:  ");
    scanf("%d",&a);
    printf("Enter second number:  ");
    scanf("%d",&b);
    max = (a>b)?a:b;
    printf("Maximum number is %d \n",max);
   

    // max two number using if else
    if(a>b){
        maximum = a;
    }
    else{
        maximum = b;
    }

    printf("Maximum number is %d \n ",maximum);

     return 0;
}

