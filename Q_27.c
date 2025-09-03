// Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/

#include<stdio.h>

int main(){
    int n;
    int sum=0;
    printf("Enter number of odd number till which you want sum:");
    scanf("%d",&n);
    for(int i=0;i<2*n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("Sum of first %d odd numbers is %d",n,sum);
    return 0;
}