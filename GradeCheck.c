/* Write a program to input marks of 3 subjects for a student and print the total marks, percentage and as the folllowing :

percentage >= 90  ---> O
80 <= percentage <90 ----> E
70 <= percentage <80 ---->A
60 <= percentage <70 ----> B
40 <= percentage <60 ----> C
 percentage < = 40 ----> D 

Created By Sagar Nandy
 
 */

#include<stdio.h>
int main(){
    int marks1, marks2, marks3, totalMarks;
    float percentage;

    printf("Enter marks of 3 subjects: \n");
    scanf("%d %d %d", &marks1, &marks2, &marks3);

    totalMarks = marks1 + marks2 + marks3;

    percentage = totalMarks / 3.0;

    printf("Total marks: %d \n", totalMarks);
    printf("Percentage: %f \n", percentage);

    if(percentage >= 90){
        printf("Grade: O \n");
}
    else if(percentage >= 80 && percentage < 90){
        printf("Grade: E \n");
}
    else if(percentage >= 70 && percentage < 80){
        printf("Grade: A \n");
}
    else if(percentage >= 60 && percentage < 70){
        printf("Grade: B \n");
}
    else if(percentage >= 40 && percentage < 60){
        printf("Grade: C \n");
}
    else{
        printf("Grade: D \n");
}

    return 0;
}
