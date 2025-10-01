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
    if(n==p){
        int C[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                C[i][j]=0;
            }
        }
        for(int i=0;i<m;i++){
            for(var=0;var<n;var++){
                for(int j=0;j<q;j++){
                    C[i][j]+=A[i][var]*B[var][j];
                }
            }
        }
        printf("\n");
        for(int i=0;i<m||i<p;i++){
            for(var=0;var<n;var++){
                if(i<m){
                    printf("%d ",A[i][var]);
                }
                else{
                    printf("  ");
                }
            }
            if(i==m/2){
                printf("X");
            }
            if(i!=m/2){
                printf(" ");
            }
            for(var=0;var<q;var++){
                if(i<p){
                    printf(" %d",B[i][var]);
                }
                else{
                    printf("  ");
                }
            }
            if(i==m/2){
                printf(" =");
            }
            if(i!=m/2){
                printf("  ");
            }
            for(var=0;var<q;var++){
                if(i<m){
                    printf(" %d",C[i][var]);
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Product not possible");
    }
    return 0;
}