/**
 * @file CAssignment1.c
 * 
 * @author Sagar Nandy (https://nandysagar.in)
 * @brief Evaluate the following expressions/equations
        a = 10, b = 20, c = −10, d = 20
        1. z = a++ - --c - --c - --c
        2. z = b++ * c++
        3. z = ++a + a++ + a-- + --a
        4. z = ++a - (-a) + a++
        5. z = a == b
        6. z = (a+b) > c
        7. z = a<b ? a : b
        8. z = a>b ? a-b : b-a
        9. z = a>b ? a>c ? a : c : b>c ? b : c
        10. z = b==d && c>a
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
int main(){
    
        int  b = 20, c = -10;
        int z;
          z =   b++ * c++;
        printf("The value of z is %d \n",z);
        
        return 0;
}