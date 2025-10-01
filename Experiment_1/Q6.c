#include<stdio.h>

int main(){
    float celsius , farhenheit;
    printf("Enter Temperature in Celsius :");
    scanf("%f",&celsius); 
    farhenheit = ((9.0/5.0)*celsius) + 32;
    printf("Farhenheit = %f",farhenheit);
    return 0;
}
