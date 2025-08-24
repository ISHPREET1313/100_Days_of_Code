//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include<stdio.h>

int main(){
    int n1,n2;
    printf("Enter First number:");
    scanf("%d",&n1);
    printf("Enter Second number:");
    scanf("%d",&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("After Swap : %d %d",n1,n2);
    return 0;
}