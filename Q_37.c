// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include<stdio.h>

int main(){
    int num1,num2,LCM,i=1,j=1,exit=1,pro1,pro2;
    printf("Enter two numbers to find their LCM:");
    scanf("%d %d",&num1,&num2);
    while ((i<=num1||i<=num2) && exit==1)
    {
        pro1=num1*i;
        j=1;
        while (j<=num2||j<=num1)
        {
            pro2=num2*j;
            if(pro1==pro2){
                LCM=pro1;
                exit=0;
                break;
            }
            j++;
        }
        i++;
    }
    printf("%d",LCM);
    return 0;
}