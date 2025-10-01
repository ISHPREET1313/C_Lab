#include<stdio.h>

int main(){
    int x[]={10,20,30,40,50};
    int *p;
    p=x;

    printf("%d\n",x[1]);
    printf("%d\n",*(p+1));
    return 0;
}