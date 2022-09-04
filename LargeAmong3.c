//Find the maximum between 3 numbers.
#include<stdio.h>
void main(){
 int a, b, c, max;
 printf("Enter a numbers: ");
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
//Alternate method 1
 max = a;
 if(b>max)
 max = b;
 if(c>max)
 max = c;
//Alternate method 2
 /*if(a>b and a> c )
 max = a;
 else if(b>a and b>c)
 max = b;
 else
 max = c;*/
 printf("Max = %d", max);
}