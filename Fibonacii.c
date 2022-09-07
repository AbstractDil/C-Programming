/**
    Program to print Fibonacci series: 0 1 1 2 3 5 8 13 21 . . . . .
*/
#include<stdio.h>

void main(){
    int n, a = 0, b = 1, c, count = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d ", a);
    printf("%d ", b);

    count = 2;

    while(count<=n){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        count++;
    }

}
