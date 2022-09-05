/* Vowel and consonant check program */

#include<stdio.h>

int main(){

char b;

printf("Enter a character: ");
scanf("%c",&b);


switch (b)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Vowel \n");
break;
default: 
printf("Consonant \n");
}

// using if else 

if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
    printf("Vowel \n");
}
else{
    printf("Consonant \n");
}

// using ternary operator

int c = (b=='a'||b=='e'||b=='i'||b=='o'||b=='u')?printf("Vowel \n"):printf("Consonant \n");


return 0;
}