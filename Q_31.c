// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/

#include<stdio.h>

int main(){
    int num,temp=0,binary=0,place=1;
    printf("Enter number to be converted to binary:");
    scanf("%d",&num);
    while(num!=0){
        temp=num%2;
        binary=temp*place+binary;
        num=num/2;
        place=place*10;
    }
    printf("%d",binary);
    return 0;
}