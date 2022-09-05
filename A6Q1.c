#include<stdio.h>
int main(){

    int a,b,c;

    printf("Enter a number: ");
    scanf("%d",&a);

  
// using ternary operator
c = (a==1)?(c=2):(a==2)?(c=3):(a==4)?(c=6):(c=0);

printf("The value of c is %d \n ",c);

   // using  if else and else if
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