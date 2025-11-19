#include<stdio.h>

#define SUM(x,y) (x+y)

#define CUBE(x) (x*x*x)

#define PRINT printf("Hello")

int main(){
    printf("%d %d\n",SUM(5,6));    
    printf("%d\n",CUBE(5));    
    PRINT;    
    return 0;
}