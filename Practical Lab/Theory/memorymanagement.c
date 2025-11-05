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
        printf("%d\n",sizeof(p));
        for(i=0;i<3;i++){
            p[i]=i+2;
        }
        for(i=0;i<3;i++){
            printf("%d\n",p[i]);
        }
        printf("%d\n",sizeof(p ));
        free(p);
    }
    return 0;
}
