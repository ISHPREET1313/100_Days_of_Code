// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine \u20B91008

Input 2:
8
Output 2:
Fine \u20B910032

Input 3:
15
Output 3:
Fine \u20B910090

Input 4:
31
Output 4:
Membership Cancelled

*/

#include<stdio.h>

int main(){
    int days_no;
    printf("Enter no. of days you have delayed:");
    scanf("%d",&days_no);
    if (0<days_no && days_no<=5){
        printf("Fine ₹%d",days_no*2);
    }
    else if (days_no<=10){
        printf("Fine ₹%d",days_no*4);
    }
    else if (days_no<=30){
        printf("Fine ₹%d",days_no*6);
    }
    else if (days_no>30){
        printf("Membership Cancelled");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}