//Q75: Add two matrices.
/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4

2 2
5 6
7 8
Output 1:
6 8
10 12
*/
#include<stdio.h>

int main(){
    int m,n,p,q,var,k=0;
    printf("Enter no.of rows of matrix A:");
    scanf("%d",&m);
    printf("Enter no.of columns of matrix A:");
    scanf("%d",&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        printf("Enter Element[%d][%d]:",i,j);
        scanf("%d",&A[i][j]);
        }
    }
    printf("Enter no.of rows of matrix B:");
    scanf("%d",&p);
    printf("Enter no.of columns of matrix B:");
    scanf("%d",&q);
    int B[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
        printf("Enter Element[%d][%d]:",i,j);
        scanf("%d",&B[i][j]);
        }
    }
    if(m==p&&n==q){
        int C[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("Addition  not possible");
    }
    return 0;
}