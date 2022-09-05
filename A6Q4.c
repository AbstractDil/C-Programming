#include<stdio.h>

int main(){

int x, flag = 0 , flag2=0;

printf("Enter a number: ");
scanf("%d",&x);

//using if-else 

        if(x%2!=0){

            if(x%3 == 0){
            flag = 3;
            }
            else{
            flag = 1;
            }
        }
        
        else{
        flag = 2;
        }
   printf("The value of flag is %d \n",flag);      

//    using ternary operator

    flag2 = (x%2!=0)?((x%3==0)?3:1):2;
    printf("The value of flag2 is %d \n",flag2);

  

   return 0 ;     
}
