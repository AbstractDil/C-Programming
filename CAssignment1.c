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
    
        int a = 10, b = 20, c = -10, d = 20;
        int z;
    
        // 1. z = a++ - --c - --c - --c
        z = a++ - --c - --c - --c;
    /* logic of above line
     z = a++ - --c;
     a++ = 10, --c = -11
     
         a = 11, c = -12
    a = 12, c = -13
     z = 33 - (-13)
     z = 33 + 13
     z = 46
   */
        printf("The value of z is %d \n",z);
    
        // 2. z = b++ * c++
        z = b++ * c++;
        printf("The value of z is %d \n",z);
    
        // 3. z = ++a + a++ + a-- + --a
        z = ++a + a++ + a-- + --a;
        printf("The value of z is %d \n",z);
    
        // 4. z = ++a - (-a) + a++
        z = ++a - (-a) + a++;
        printf("The value of z is %d \n",z);
    
        // 5. z = a == b
        z = a == b;
        printf("The value of z is %d \n",z);
    
        // 6. z = (a+b) > c
        z = (a+b) > c;
        printf("The value of z is %d \n",z);
    
        // 7. z = a<b ? a : b
        z = a<b ? a : b;
        printf("The value of z is %d \n",z);
    
        // 8. z = a>b ? a-b : b-a
        z = a>b ? a-b : b-a;
        printf("The value of z is %d \n",z);
    
        // 9. z = a>b ? a>c ? a : c : b>c ? b : c
        z = a>b ? a>c ? a : c : b>c ? b : c;
        printf("The value of z is %d \n",z);
    
        // 10. z = b==d && c>a
        z = b==d && c>a;
        printf("The value of z is %d \n",z);
    
        return 0;
}