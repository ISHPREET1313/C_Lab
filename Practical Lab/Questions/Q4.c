// Write a program that takes 3 numbers as an input from the user and displays their sum

#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter First Number:");
    scanf("%d",&n1);
    printf("Enter Second Number:");
    scanf("%d",&n2);
    printf("Enter Third Number:");
    scanf("%d",&n3);
    printf("Sum of %d,%d,%d is %d",n1,n2,n3,n1+n2+n3);
    return 0;
}