//Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.

#include<stdio.h>

int main(){
    int x =300;
    for(x=0;x<3;x++){
        printf("first=%d\t",x++);
    }
    printf("\nsecond=%d",x);
    return 0;
}