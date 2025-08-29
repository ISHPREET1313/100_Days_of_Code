// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/

#include<stdio.h>

int main(){
    float percentage;
    printf("Enter your percentage:");
    scanf("%f",&percentage);
    if(percentage>90 && percentage<=100){
        printf("GRADE A");
    }
    else if(percentage>80 && percentage<=90){
        printf("GRADE B");
    }
    else if(percentage>70 && percentage<=80){
        printf("GRADE C");
    }
    else if(percentage>60 && percentage<=70){
        printf("GRADE D");
    }
    else if(percentage>50 && percentage<=60){
        printf("GRADE E");
    }
    else if(percentage>0 && percentage<=50){
        printf("GRADE F");
    }
}