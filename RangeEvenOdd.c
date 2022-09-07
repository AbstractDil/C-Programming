/* Write a program to print even and odd number between 1-50 */
#include<stdio.h>
int main(){

    int n,i;
    printf("Even numbers are:  ");
   
    for( n=1; n<=50; n++){
        if(n%2==0){
            printf("  %d ", n);
        }
        
    }

    
     printf("\n");
    printf("Odd numbers are:  ");


    for( i=1; i<=50; i++){
        if(i%2!=0){
            printf("%d ", i);
        }
        
    }
    

    return 0 ; 
}