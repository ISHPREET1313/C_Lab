#include<stdio.h>

#define PI 3.14

int main(){
    int radius =5;
    float circum= 2*PI*radius;
    float area= PI*radius*radius;
    printf("circumference= %f and area= %f",circum,area);
    return 0;
}