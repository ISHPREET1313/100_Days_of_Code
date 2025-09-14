/*Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *


Sample Test Cases:
Input 1:

Output 1:
*****
  ****
    ***
      **
        *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include<stdio.h>

int main(){
    for(int i=1;i<=5;i++){
        for (int j=i;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
        for (int k=1;k<=i;k++)
        {
            printf("  ");
        }
    }
    return 0;
}