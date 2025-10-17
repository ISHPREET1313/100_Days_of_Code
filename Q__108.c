//Q108: Write a Program to take an integer numsay nums. Print an numsay answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include<stdio.h>

int main(){
    int n;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    int answer[n];
    for(int i=0;i<n;i++){
        answer[i]=1;
        for(int j=0;j<n;j++){
            if(j!=i){
                answer[i]*=nums[j];
            }
        }
    }
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",answer[i]);
        if(i<(n-1)){
            printf(",");
        }
    }
    printf("]");
    return 0;
}