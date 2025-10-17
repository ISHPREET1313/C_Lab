//Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. Print the values of both the pointers and the variables they point to.

#include<stdio.h>

int main(){
    int x=10;
    float y=5.0;
    char z='C';
    
    int*a=&x;
    float*b=&y;
    char*c=&z;

    printf("Value of pointer a is %d\n",a);
    printf("Value of pointer b is %d\n",b);
    printf("Value of pointer c is %d\n",c);
    printf("Pointer a points to value %d\n",*a);
    printf("Pointer b points to value %f\n",*b);
    printf("Pointer c points to value %c\n",*c);
    return 0;
}