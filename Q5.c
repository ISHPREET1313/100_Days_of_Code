//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>

int main(){
    float celsius , farhenheit;
    printf("Enter Temperature in Celsius :");
    scanf("%f",&celsius); 
    farhenheit = ((9.0/5.0)*celsius) + 32;
    printf("Farhenheit = %.0f",farhenheit);
    return 0;
}
