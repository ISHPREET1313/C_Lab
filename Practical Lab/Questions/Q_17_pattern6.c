#include<stdio.h>

int main(){
    int count=1;
    int rows=5;
    int rows1=5;
    for(int i=0;i<8;i++){
        if(i<4){
            for(int k=0;k<rows;k++){
                printf(" ");
            }
            for(int j=0;j<i;j++){
                printf("* ");
            }
            printf("\n");
            rows--; 
        }
        else{
            for(int j=1;j<rows1;j++){
                printf(" *");
            }
            if(i==7){
                break;
            }
            printf("\n");
            for(int k=1;k<=count;k++){
                printf(" ");
            }
            count++;
            rows1--;
        }
    }
    return 0;
}