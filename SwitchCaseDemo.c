#include<stdio.h>

int main(){
    int day_no = 0;
    printf("Enter the Day number of Week: ");
    scanf("%d", &day_no);
    switch(day_no){
        case 1: printf("Sunday\n");
            break;
        case 2: printf("Monday\n");
            break;
        case 3: printf("Tuesday\n");
            break;
        case 4: printf("Wednesday\n");
            break;
        case 5: printf("Thursday\n");
            break;
        case 6: printf("Friday\n");
            break;
        case 7: printf("Saturday\n");
            break;
        default: printf("Wrong Input\n");
    }

    return (0);
}
