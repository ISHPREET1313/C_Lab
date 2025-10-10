//Declare a static local variable inside a function. Observe how its value persists across function calls.

#include<stdio.h>

void count(){
    static int x=0;
    x++;
    printf("count=%d\n",x);
}

int main(){
    count();
    count();
    count();
    count();
    return 0;
}
