// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include<stdio.h>

int main(){
    int num,temp,binary=0,place=1,n=0;
    printf("Enter number to find complement binary:");
    scanf("%d",&num);

    for(;num!=0;){
        temp=num%10;
        if(temp==1){
            temp=0;
            n++;
            binary=temp*place+binary;
        }
        else if(temp==0){
            temp=1;
            binary=temp*place+binary;
        }
        place*=10;
        num=num/10;
    }
    for(int i=1;i<n||i==1;i++){
        printf("0");
    }
    printf("%d",binary);
    return 0;
}