//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>

int main(){
    int var1,var2,temp;
    printf("Enter First number:");
    scanf("%d",&var1);
    printf("Enter Second number:");
    scanf("%d",&var2);
    temp=var1;
    var1=var2;
    var2=temp;
    printf("After Swap: %d %d",var1,var2);
    return 0;
}