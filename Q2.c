// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>

int main(){
    int n1,n2,sum,diff,product,quotient;
    printf("Enter First number:");
    scanf("%d",&n1);
    printf("Enter Second number:");
    scanf("%d",&n2);
    sum = n1 + n2;
    diff=n1-n2;
    product=n1*n2;
    if (n2==0){
        printf("Sum=%d, Diff=%d, Product=%d, Division not possible",sum,diff,product);
    }
    else{
        quotient=n1/n2;
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",sum,diff,product,quotient);
    }
    
    return 0;   
}