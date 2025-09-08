// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/

#include<stdio.h>

int main(){
    int num,temp,sum=0;
    printf("Enter number to find sum of digits:");
    scanf("%d",&num);

    for(;num!=0;){
        temp=num%10;
        num=num/10;
        sum=sum+temp;
    }
    printf("%d",sum);
    return 0;
}