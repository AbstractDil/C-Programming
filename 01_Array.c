/*

Write a program to input N students marks of 3 subjects in different arrays and create new array with total marks of each student. Display the total marks of each student.

*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks1[n], marks2[n], marks3[n], total[n];
    for(int i=0; i<n; i++){
        printf("Enter the marks of student %d in 3 subjects: ", i+1);
        scanf("%d %d %d", &marks1[i], &marks2[i], &marks3[i]);
        total[i] = marks1[i] + marks2[i] + marks3[i];
    }
    
   /* print total marks of  each  student */ 
    for(int i=0; i<n; i++){
        printf("Total marks of student %d is %d \n", i+1, total[i]);
    }

return 0 ; 
}