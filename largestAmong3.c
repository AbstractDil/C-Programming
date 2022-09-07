//Find the maximum between 3 numbers.

#include<stdio.h>

void main(){
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    /*if(a>b){
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
    }*/
    max = a;
    if(b>max)
        max = b;
    if(c>max)
        max = c;
    /*if(a>b && a> c )
        max = a;
    else if(b>a && b>c)
        max = b;
    else
        max = c;*/
    printf("Max = %d", max);
}
