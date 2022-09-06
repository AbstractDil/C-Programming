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
        int z,z2,z3,z4,z5,z6,z7,z8,z9,z10;
    
        // 1. z = a++ - --c - --c - --c
        z = a++ - --c - --c - --c;
    /* logic of above line
    Step-1 :   Calculate a++ = 10, --c = -11
    Step-2 :  Then a++ - --c i.e. z= 10 - (-11) = 21
    Step-3 :  Calculate --c = -12 
    Step-4 :  Then  a++ - --c i.e. z= 21 - (-12) = 33
    Step-5 :  Calculate --c = -13 
    Step-6 : Finally  i.e. z= 33 - (-13)  = 46

    [ z = a++ - --c;
     a++ = 10, --c = -11
    a = 11, c = -12
    a = 12, c = -13
     z = 33 - (-13)
     z = 33 + 13
     z = 46]
   */
        printf("The value of z is %d \n",z);
    
       
    
        // 3. z = ++a + a++ + a-- + --a
        z3 = ++a + a++ + a-- + --a;
        printf("The value of z3 is %d \n",z3);
    
        // 4. z = ++a - (-a) + a++
        z4 = ++a - (-a) + a++;
        printf("The value of z4 is %d \n",z4);
    
        // 5. z = a == b
        z5 = a == b;
        printf("The value of z5 is %d \n",z5);
    
        // 6. z = (a+b) > c
        z6 = (a+b) > c;
        printf("The value of z6 is %d \n",z6);
    
        // 7. z = a<b ? a : b
        z7 = a<b ? a : b;
        printf("The value of z7 is %d \n",z7);
    
        // 8. z = a>b ? a-b : b-a
        z8 = a>b ? a-b : b-a;
        printf("The value of z8 is %d \n",z8);
    
        // 9. z = a>b ? a>c ? a : c : b>c ? b : c
        z9 = a>b ? a>c ? a : c : b>c ? b : c;
        printf("The value of z9 is %d \n",z9);
    
        // 10. z = b==d && c>a
        z10 = b==d && c>a;
        printf("The value of z10 is %d \n",z10);
    
        return 0;
}