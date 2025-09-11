// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include<stdio.h>

int factorial(int x);
int factorial(int x){
    int factorial=1,i;
    for(;x>0;x--){
        factorial*=x;
    }
    return factorial;
}

int main(){
    int num,num_cp,digit,ans=0;
    printf("Enter number to see is strong or not:");
    scanf("%d",&num);
    num_cp=num;
    for (int i=0;num_cp>0;i++)
    {
        digit=num_cp%10;
        num_cp=num_cp/10;
        ans=ans+factorial(digit);
    }

    if (num==ans){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }
    
    return 0;
}