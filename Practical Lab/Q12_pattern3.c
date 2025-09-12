#include<stdio.h>

int main(){
    int count=0;
    int rows=5;
    for(int i=0;i<4;i++){
        for(int j=1;j<rows;j++){
            printf("* ");
        }
        printf("\n");
        count++;
        for(int k=0;k<count;k++){
            printf(" ");
        }
        rows--;
    }
    return 0;
}