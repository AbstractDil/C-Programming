#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter first number:  \n");
    scanf("%d",&a);
    printf("Enter second number:  \n");
    scanf("%d",&b);
    printf("Enter third number:  \n");
    scanf("%d",&c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    /* Logic of above line
    if(a>b){
        if(a>c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b>c){
            max = b;
        }
        else{
            max = c;
        }
    }

    */
    printf("Maximum number is %d",max);
    return 0;
}