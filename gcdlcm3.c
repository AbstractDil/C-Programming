/**
*   GCD and LCM of two numbers
*/

#include<stdio.h>

void main(){
    int a, b, gcd, i, lcm, mul, max, min, r ;

    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    mul = a * b;

    if(a>b){
        max = a;
        min = b;
    }
    else{
        max = b;
        min = a;
    }
    //printf("%d, %d,\n", a, b);
    //printf("%d, %d,\n", max, min);

    while(max>=min){
        r = max % min;
        //printf("%d", r);
        if(r == 0){
            gcd = min;
            break;
        }
        else{
            max = min;
            min = r;
        }
    }

    printf("GCD of %d, %d is %d.\n", a, b, gcd);
    lcm = mul / gcd;
    printf("LCM of %d, %d is %d.\n", a, b, lcm);
}
