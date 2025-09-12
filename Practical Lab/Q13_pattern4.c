#include<stdio.h>

int main(){
    int count=0;
    int rows=5;
    for(int i=0;i<5;i++){
        for(int k=0;k<rows;k++){
            printf(" ");
        }
        for(int j=0;j<count;j++){
            printf(" *");
        }
        printf("\n");
        count++;
        rows--;
    }
    return 0;
}