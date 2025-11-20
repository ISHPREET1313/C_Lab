#include<stdio.h>

#define SUM(x,y) \
    printf("Addition done successfully"),\
    (x+y)



#define CUBE(x) (x*x*x)

#define PRINT printf("Hello")

int main(){
    printf(" %d",SUM(5,6));  
    // printf("%d\n",CUBE(5));    
    // PRINT;    
    return 0;
}