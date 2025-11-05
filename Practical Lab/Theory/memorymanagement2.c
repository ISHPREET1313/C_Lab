#include<stdio.h>
#include<stdlib.h>

int main(){
    int* p=(int*)calloc(5,sizeof(int));
    if(p==NULL){
        printf("Allocation failed");
    }
    else{
        for(int i=0;i<3;i++){
            printf("%d\n",p[i]);
        }
        free(p);
    }
    return 0;
}