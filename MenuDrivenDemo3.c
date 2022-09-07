
//Menu-driven Calculator
#include<stdio.h>

void main(){
    int no1, no2,flag=1;
    char choice;
    double ans = 0.0;
    char nextRound = 'Y';

    do{
    //Input two numbers
    printf("Enter two numbers: ");
    scanf("%d%d",&no1,&no2);

    //Print the menu to the User.
    //printf("Press....\n+. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n\n");
    printf("Which operation do you want? (+,-,*,/,%): ");
    //Input User's choice.
    scanf("%*c%c",&choice);


    switch(choice){
        case '+': ans = no1 + no2;
                //printf("%d + %d = ",no1,no2);
                break;
        case '-': ans = no1 - no2;
               // printf("%d - %d = ",no1,no2);
                break;
        case '*': ans = no1 * no2;
               // printf("%d * %d = ",no1,no2);
                break;
        case '/': ans = (double)no1 / no2;
                //printf("%d / %d = ",no1,no2);
                break;
        case '%': ans = no1 % no2;
               // printf("%d % %d = ",no1,no2);
                break;
        default:
                printf("\nWrong Choice!!!\n");
                //printf("Answer = ");
                flag=0;
                //return;
    }

    if(flag==1){
        printf("%d %c %d = %.2f\n\n",no1,choice,no2,ans);
    }
    //printf("%.2f.\n", ans);

    printf("Do you want to repeat? (y/n) : ");
    scanf("%*c%c",&nextRound);
    }while(nextRound == 'Y' || nextRound == 'y');
}
