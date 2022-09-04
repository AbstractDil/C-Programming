//Find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main(){
 //Variable Declaration
 /*
 Variable description
 a = input A
 b = input B
 c = input C
 d = B^2 - 4AC
 X1 = root1
 X2 = root2
 X = Root if d is zero
 */
 float a, b, c, d, x, x1, x2;
 printf("Enter the values of A, B and C: ");
 scanf("%f%f%f",&a,&b,&c);
 if(a==0){
 printf("This is not a quadratic equation.\n");
 return;
 }
 d = pow(b,2.0) - 4 * a * c;
 x = (-b) / (2 * a);
 if(d<0){
 printf("No Real roots found.\n");
 return;
 }
 if(d==0){
 printf("Only one root: %.2f",x);
 }
 else{
 x1 = x + sqrt(d) / (2 * a);
 x2 = x - sqrt(d) / (2 * a);
 printf("The roots are: %.2f, %.2f",x1,x2);
 }
}