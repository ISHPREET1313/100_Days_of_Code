/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>

int main(){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=(2*i)-1&&i<=5;j++){
            printf("*");
        }
        for(int j=2*(10-i)-1;j>=1&&i>5;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}