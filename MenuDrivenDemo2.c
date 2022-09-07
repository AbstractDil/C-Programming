
//Menu-driven Calculator
#include<stdio.h>

void main(){
    double no1, no2;
    int choice;
    double ans = 0.0;
    //char nextRound = 'Y';

    while(1){
    //Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf%lf",&no1,&no2);

    //Print the menu to the User.
    printf("Press....\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n0. Exit\n");
    printf("Enter your choice: ");
    //Input User's choice.
    scanf("%d",&choice);


    switch(choice){
        case 1: ans = no1 + no2;
                printf("Sum = ");
                break;
        case 2: ans = no1 - no2;
                printf("Difference = ");
                break;
        case 3: ans = no1 * no2;
                printf("Multiplication = ");
                break;
        case 4: ans = no1 / no2;
                printf("Division = ");
                break;
        case 0: return;
        default:
                printf("\nWrong Choice!!!\n");
                printf("Answer = ");
                //return;
    }

    printf("%.2f.\n", ans);
    }
}
