//Max and Min of an Array

#include<stdio.h>

#define MAX 30  //Creates a constant value

void main(){
    //Declaration of an Array.
    int arr[MAX], i, size;
    int maxIdx, secondMaxIdx;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    //Input all the elements of the array
    printf("Enter %d numbers for the array: ",size);
    for(i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }

        //printing array elements.
    //printf("%d, %d, %d, %d, %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("\nThe array elements are: ");
    for(i = 0; i<size; i++){
        printf("%d, ",arr[i]);
    }
    printf("\b\b.\n");

    //Finding maximum and minimum
    maxIdx = 0;
    for(i = 0; i<size; i++){
        if(arr[maxIdx] < arr[i]){
            maxIdx = i;
        }
    }
    secondMaxIdx = -1;
    for(i=0; i<size; i++){
        if(arr[i] != arr[maxIdx]){
            if(secondMaxIdx = -1)
                secondMaxIdx = i;
            else if(arr[secondMaxIdx] < arr[i])
                secondMaxIdx = i;
        }
    }

    printf("Max  = %d", arr[maxIdx]);
    printf("Second Max  = %d", arr[secondMaxIdx]);
}


