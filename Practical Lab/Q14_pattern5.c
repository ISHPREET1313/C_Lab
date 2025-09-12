#include<stdio.h>

int main(){
    int count=0;
    for(int i=0;i<5;i++){
        for(int j=1;j<=count;j++){
            printf(" %d ",j);
        }
        printf("\n");
        count++;
    }
    return 0;
}