#include<stdio.h>

int main(){
    int x=30;
    int *p=&x;
    int **q=&p;
    printf("Address of x %p\n",&x);
    printf("Address of p %p\n",&p);
    printf("Address of q %p\n\n",&q);

    printf("value of x is %d\n",x);
    printf("value of p is %p\n",p);
    printf("value of *q is %p\n",*q);
    printf("value of *p is %d\n",*p);
    printf("value of **q is %d\n",**q);
    printf("value of q is %p\n",q);
    return 0;
}