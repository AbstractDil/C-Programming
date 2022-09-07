//Check whether a number is pronic or not, ex. 30 = 5*6

#include<stdio.h>

void main(){

    int no, i, flag=0;

    printf("Enter a number: ");
    scanf("%d",&no);

    for(i = 1; i<=no/2; i++){
        if(i*(i+1) == no){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("%d is a pronic number.",no);
    }
    else
        printf("%d is not a pronic number.",no);

}
