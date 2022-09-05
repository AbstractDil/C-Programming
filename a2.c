#include<stdio.h>
int main(){

    int a,b;

    printf("Enter a number: ");
    scanf("%d",&a);

    // b= (a==1)?2:(a==2)?3:(a==4)?6:0;

   // b = (a==1)?(b=2):(a==2)?(b=3):(a==4)?(b=6):(b=0);

   // logic of if else
    if(a==1){
        b=2;
    }
    else if(a==2){
        b=3;
    }
    else if(a==4){
        b=6;
    }
    else{
        b = 0;
    }

    printf("The value of b is %d \n ",b);

    return 0;
}