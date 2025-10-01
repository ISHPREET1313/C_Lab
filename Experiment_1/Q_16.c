#include<stdio.h>

int main(){
    int population=10000;
    printf("Initial population = %d\n", population);
    for(int year=1;year<=10;year++){
        population*=1.10;
        printf("Population at the end of year %d = %d\n",year,population);
    }
    return 0;
}