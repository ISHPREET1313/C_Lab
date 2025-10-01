#include<stdio.h>

int main(){
    int x=5;
    float y=3.5;
    char z='c';
    int* a=&x;
    float* b=&y;
    char* c=&z;

    printf("The value of x is:%d\n",x);
    printf("The value of int pointer is:%d\n",a);
    printf("The value at int pointer is:%d\n",*a);
    printf("The value of y is:%f\n",y);
    printf("The value of float pointer is:%d\n",b);
    printf("The value at float pointer is:%f\n",*b);
    printf("The value of z is:%c\n",z);
    printf("The value of char pointer is:%d\n",c);
    printf("The value at char pointer is:%c\n",*c);
    return 0;
}