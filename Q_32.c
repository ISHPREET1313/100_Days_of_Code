// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include<stdio.h>

int main(){
    int num,reverse=0,rem,temp;
    printf("Enter number to check for palindrome:");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        rem=num%10;
        num=num/10;
        reverse=reverse*10+rem;
    }
    if (temp==reverse){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}