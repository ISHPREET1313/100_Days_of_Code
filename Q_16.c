// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/

#include<stdio.h>

int main(){
    int num1,num2,num3;
    printf("enter number 1:");
    scanf("%d", &num1);
    printf("enter number 2:");
    scanf("%d", &num2);
    printf("enter number 3:");
    scanf("%d", &num3);
    if(num1>num2 && num1>num3){
        printf("Largest is %d",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("Largest is %d",num2);
    }
    else if(num3>num1 && num3>num2){
        printf("Largest is %d",num3);
    }
    return 0;
}