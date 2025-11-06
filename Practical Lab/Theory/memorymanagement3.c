#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    int *p;
    p=(int*)malloc(5*sizeof(int));
    if(p==NULL){
        printf("Allocation failed");
    }
    else{
        for(i=0;i<5;i++){
            p[i]=i+2;
        }
        for(i=0;i<5;i++){
            printf("%d\n",p[i]);
        }
        p=(int*)realloc(p,10*sizeof(int));
        if(p==NULL){
            printf("Allocation Failed");
        }
        else{
            for(i=0;i<8;i++){
                p[i]=i+2;
            }
            for(i=0;i<8;i++){
                printf("%d\n",p[i]);
            }
        }
        free(p);
        p=NULL;
    }
    return 0;
}
