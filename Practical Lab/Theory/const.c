#include<stdio.h>

int main(){
    const int x=5;
    printf("x=%d\n",x);
    //x=x+1; x is not modifiable it is read only
    printf("x=%d\n",x);
    return 0;
}