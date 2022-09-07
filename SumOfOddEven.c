#include <stdio.h>

int main() {

  int num, evenSum = 0, oddSum = 0, rem;

  printf("Enter any positive number : ");
  scanf("%d", &num);

  while (num > 0) {
    rem = num % 10;
    num = num / 10;
    
    if (rem % 2 == 0) {

      evenSum = evenSum + rem;

    } else {
      oddSum = oddSum + rem;
    }
  }

  printf("Sum of even digit = %d \n", evenSum);
  printf("Sum of odd digit = %d \n ", oddSum);

  return 0;
}

/*

Enter any positive number : 456
Sum of even digit = 10 
Sum of odd digit = 5 

*/
