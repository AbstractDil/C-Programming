/*
3. Convert the following snippet in to corresponding if..else..if / if..else
statement.
i. c = a>b?a:b
ii. max = a>b?a>c?a:c:b>c?b:c
iii. z = a==b?a==c?1:0:0

*/

#include<stdio.h>
int main(){

int a,b,c,max;

printf("Enter the value of a: ",a);
scanf("%d",&a);

printf("Enter the value of b: ",b);
scanf("%d",&b);


// i. c = a>b?a:b

if(a>b){
    c=a;

}
else{
    c=b;
}

printf("The value of c is %d \n",c);

return 0;

}