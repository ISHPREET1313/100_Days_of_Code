// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    printf("Enter string:");
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                printf("%c",str[k]);
            }
            if(i<n-1){
                printf(",");
            }
        }
    }
    return 0;
}