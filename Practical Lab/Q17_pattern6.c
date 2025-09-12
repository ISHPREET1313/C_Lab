#include<stdio.h>

int main(){
    int count=0;
    int rows=5;
    int rows1=5;
    for(int i=0;i<8;i++){
        if(i<4){
            for(int k=0;k<=rows+1;k++){
                printf(" ");
            }
            for(int j=0;j<count;j++){
                printf(" *");
            }
            printf("\n");
            count++;
            rows--;
        }
        else{
            for(int k=0;k<i;k++){
                printf(" ");
            }
            for(int j=1;j<rows1;j++){
            printf("* ");
            }
            printf("\n");
            rows1--;
        }
    }
    return 0;
}