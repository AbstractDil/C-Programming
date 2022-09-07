/**
*   GCD and LCM of two numbers
*/

#include<stdio.h>

void main(){
    int a, b, gcd, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);

    for(i = 1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    printf("GCD of %d, %d is %d.\n", a, b, gcd);
    lcm = (a * b) / gcd;
    printf("LCM of %d, %d is %d.\n", a, b, lcm);
}
