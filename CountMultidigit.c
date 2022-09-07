//Count number of digits

#include<stdio.h>

void main(){
    int Mno, count = 0;// temp; //Mno = 345

    printf("Enter a number: ");
    scanf("%d",&Mno);
   // temp = Mno;

    if(Mno < 0){
        Mno = -Mno;
    }

    while(Mno > 0){
        count = count + 1;
        Mno = Mno / 10;   //Mno = 32
    }

    printf("Number of digits = %d",count);
}
