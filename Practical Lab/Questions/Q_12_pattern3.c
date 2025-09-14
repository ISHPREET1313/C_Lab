#include<stdio.h>

int main(){
    int rows=4;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=rows;j++){
            printf("* ");
        }
        if(i==4){
            break;
        }
        printf("\n");
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        rows--;
    }
    return 0;
}