//Perform pointer arithmetic (increment and decrement) on pointers of different data types. Observe how the memory addresses change and the effects on data access.

#include<stdio.h>

int main(){
    int x=10;
    float y=5.0;
    int*a=&x;
    float*b=&y;

    printf("Value of pointer a is %d\n",a);
    printf("Value of pointer b is %d\n",b);
    printf("Pointer a points to value %d\n",*a);
    printf("Pointer b points to value %f\n",*b);
    printf("\nIncrementing a\n");
    printf("Decrementing b\n");
    b--;
    a++;
    printf("Value of pointer a is %d\n",a);
    printf("Value of pointer b is %d\n",b);
    printf("Pointer a points to value %d\n",*a);
    printf("Pointer b points to value %f\n",*b);
    return 0;
}