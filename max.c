#include<stdio.h>
int main(){

    int a,b,max;
    printf("Enter first number:  \n");
    scanf("%d",&a);
    printf("Enter second number:  \n");
    scanf("%d",&b);
    max = (a>b)?a:b;
    printf("Maximum number is %d",max);
    return 0;
}