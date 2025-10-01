#include<stdio.h>

int main(){
    int rows=4,num=1;
    for(int i=1;i<=3;i++){
        for(int k=0;k<rows;k++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
        rows--;
    }
    return 0;
}