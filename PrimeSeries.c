/**
*   Sum and average of first 10 prime numbers
*/

#include<stdio.h>
#include<math.h>

int main(){

    int i, count = 0, flag = 1, no = 2, sum = 0;
    float avg;

    while(count <= 10){
        flag = 1;
        for(i = 2; i <= sqrt(no); ++i){
            if(no%i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            sum = sum + no;
            count++;
            //printf("%d th prime number %d\n", count, no);
            printf("%d + ", no);
        }
        no++;
    }

    printf("\b\b= %d\n", sum);

    avg = sum / 10;
    printf("Average: %.2f\n", avg);
    //printf("\nSum of first 10 prime numbers : %d\n", sum);
}

