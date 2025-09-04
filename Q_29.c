//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/

#include<stdio.h>

int main(){
    int num,factorial=1;
    printf("Enter number to find its factorial:");
    scanf("%d",&num);
    while (num!=0){
        factorial*=num;
        num--;
    }
    printf("%d",factorial);
    return 0;
}