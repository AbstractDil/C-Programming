//Use of power and square root functions from math.h header file
#include<stdio.h>
#include<math.h>
void main(){
 int a = 125;
 double x = 1/3.0;
 double power = pow(a, 1/3.0);
 double squrt = sqrt(a);
 printf("Power : %f\n", power);
 printf("Sqrt : %f", squrt);
}