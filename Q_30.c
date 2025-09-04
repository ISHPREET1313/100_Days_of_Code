// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include<stdio.h>

int main(){
    int num1,temp,num2=0;
    printf("Enter number to reverse:");
    scanf("%d",&num1);

    for(;num1!=0;){
        temp=num1%10;
        num1=num1/10;
        num2=num2*10+temp;
    }
    printf("%d",num2);
    return 0;
}