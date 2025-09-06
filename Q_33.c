// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include<stdio.h>

int main(){
    int num,originalnum,temp,result=0,remainder=0,count=0;
    printf("Enter Number:");
    scanf("%d",&num);
    originalnum=num;
    while(num>0){
        num/=10;
        count++;
    }
    temp=originalnum;
    for(int i=0;i<count;i++){
        remainder=temp%10;
        int numpow=1;
        for(int j=0;j<count;j++){
            numpow=numpow*remainder;
        }
        result=result+numpow;
        temp/=10;
    }
    if(result==originalnum){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
}