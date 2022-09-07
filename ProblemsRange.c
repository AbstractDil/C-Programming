#include<stdio.h>

void main(){

    int lb, ub, i, j, count = 0;

    //Input the range
    printf("Enter the lower range: ");
    scanf("%d",&lb);
    printf("Enter the upper range: ");
    scanf("%d",&ub);

    while(lb>ub){
        count++;
        if(count == 3){
            printf("!!!You have exhausted all tries...\n");
            return;
        }
        printf("Lower range must be less than upper range.\nTry Again...!! (%d try(s) left)\n", (3-count));
        printf("Enter the lower range: ");
        scanf("%d",&lb);
        printf("Enter the upper range: ");
        scanf("%d",&ub);
    }

    for(i = lb; i<=ub; i++){
        printf("The factors of %d are: ", i);

        for(j = 1; j<=i; j++){
            if(i % j == 0){
                printf("%d, ",j);
            }
        }
        printf("\b\b.\n");
    }



}
