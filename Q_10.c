//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/

#include<stdio.h>

int main(){
    int hours,minutes,seconds;
    int input_time;
    printf("Enter Time in seconds:");
    scanf("%d",&input_time);
    hours=input_time/3600;
    minutes=(input_time-hours*3600)/60;
    seconds=(input_time-hours*3600-minutes*60);
    printf("%d:%d:%d",hours,minutes,seconds);
    
    return 0;
}
