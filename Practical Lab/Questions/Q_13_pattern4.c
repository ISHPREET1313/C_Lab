#include<stdio.h>

int main(){
    int rows=5;
    for(int i=1;i<=4;i++){
        for(int k=0;k<rows;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf(" *");
        }
        printf("\n");
        rows--;
    }
    return 0;
}