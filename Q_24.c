// Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/

#include<stdio.h>

int main(){
    int unit;
    printf("Enter units:");
    scanf("%d",&unit);
    if (0<unit && unit<=100){
        printf("Bill: ₹%d",unit*5);
    }
    else if (unit<=200){
        printf("Bill ₹%d",100*5+((unit-100)*9));
    }
    else if (unit>200){
        printf("Bill ₹%d",100*5+100*9+((unit-200)*16));
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}