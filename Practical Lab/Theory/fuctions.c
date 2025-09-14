#include<stdio.h>

void add(int,int);
int main(){
    int n1,n2;
    printf("Enter nnumber 1:");
    scanf("%d",&n1);
    printf("Enter number 2:");
    scanf("%d",&n2);

    add(n1,n2);
    
    return 0;
}

void add(int x, int y){
    int sum=x+y;
    printf("%d",sum);
}