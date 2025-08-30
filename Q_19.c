// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
printf 1:
3 3 3
Output 1:
Equilateral

printf 2:
3 3 4
Output 2:
Isosceles

printf 3:
2 3 4
Output 3:
Scalene

*/

#include<stdio.h>

int main(){
    int s1,s2,s3;
    printf("Enter Side 1:");
    scanf("%d",&s1);
    printf("Enter Side 2:");
    scanf("%d",&s2);
    printf("Enter Side 3:");
    scanf("%d",&s3);
    if (s1 == s2 && s1 == s3){
        printf("Equilateral");
    }
    else if (s1==s2 || s2==s3 || s1==s3){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}