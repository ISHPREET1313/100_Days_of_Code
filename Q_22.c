// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include<stdio.h>

int main(){
    float cost_p,sell_p,profit,loss;
    printf("Enter Cost price:");
    scanf("%f",&cost_p);
    printf("Enter Selling price:");
    scanf("%f",&sell_p);
    if(cost_p==sell_p){
        printf("No Profit No Loss");
    }
    else if(cost_p>sell_p){
        loss=((cost_p-sell_p)/cost_p)*100;
        printf("Loss %.0f%%",loss);
    }
    else{
        profit=((sell_p-cost_p)/cost_p)*100;
        printf("Profit %.0f%%",profit);
    }
}