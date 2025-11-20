#include<stdio.h>

#define DEBUG 
int main(){
    #ifdef DEBUG
        printf("HEllo");
    #endif
    return 0;
}
