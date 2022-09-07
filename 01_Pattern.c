/*  Pattern print 

 */

#include<stdio.h>

int main(void){

    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
 printf(" =========== Pattern Type One ============ \n\n");

 /*

 *
**
***
****
*****
 
 */

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
 printf(" =========== Pattern Type Two ============\n\n");
 /*

****
***
**
*
 
 */

    for(i=1; i<=n;i++){
        for(j=n; j>=i; j--){
            printf("*");
        }
        printf("\n");
    }
 printf(" =========== Pattern Type Three ============ \n\n");

 /*

   *
  ***
 *****
*******

 */

    for(i=1;i<=n;i++){

        for(int space=1; space<=(n-i); space++){
            printf(" ");
        }

        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0 ;
}