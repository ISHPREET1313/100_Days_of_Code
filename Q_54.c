/*Q54: Write a program to print the following pattern:

*

***

*****
*******
***

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/


#include<stdio.h>

int main(){
    int count=0;
    for(int i=1;i<=6;i++){
        if(count==1||count==4||count==19){
            printf("\n");
        }
        for(int j=1;j<=(2*i)-1&&i<=4;j++){
            printf("*");
            count++;
        }
        for(int j=1 + 2 * (i % 2);j>=1&&i>4;j--){
            printf("*");
            count++;
        }
        printf("\n");
    }
    return 0;
}