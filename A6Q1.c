#include<stdio.h>
int main(){

    int a,b,c,d,e;

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

    // using switch case

    switch(a){
        case 1:
            printf("The value of d is 2 \n");
            break;
        case 2:
            printf("The value of d is 3 \n");
            break;
        case 4:
            printf("The value of d is 6 \n");
            break;
        default:
            printf("The value of d is 0 \n");
            break;
    }

    // Alternative way using switch case

    switch(a){
        case 1:
            e=2;
            break;
        case 2:
            e=3;
            break;
        case 4:
            e=6;
            break;
        default:
            e=0;
            break;
    }

    printf("The value of e is %d \n",e);

    return 0;
}