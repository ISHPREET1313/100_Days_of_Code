// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,D;
    float x,x1,x2;
    printf("Enter coefficient of x^2:");
    scanf("%d",&a);
    printf("Enter coefficient of x:");
    scanf("%d",&b);
    printf("Enter constant:");
    scanf("%d",&c);
    D=(b*b)-(4*a*c);
    if (D>=0){
        if(D==0){
            x=(-b)/(2.0*a);
            printf("Roots are real and same: %.2f",x);
        }
        else{
            x1=((-b)+sqrt(D))/(2.0*a);
            x2=((-b)-sqrt(D))/(2.0*a);
            printf("Roots are real and different: %.2f, %.2f",x1,x2);
        }
    }
    else{
        printf("Roots are complex");
    }
}