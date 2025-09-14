#include<stdio.h>

int main(){
    int rows=5;
    for(int i=1;i<=5;i++){
        for(int k=1;k<rows;k++){
                printf(" ");
            }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        rows--;
    }
    return 0;
}