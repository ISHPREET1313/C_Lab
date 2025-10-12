#include<stdio.h>

enum Result{
    Pass=40,
    Fail=30,
    First=75,
    Second
};
int main(){
    enum Result p=Pass,f=Fail;
    printf("%d\n",p);
    int choice;
    printf("Enter Choice:");
    scanf("%d",&choice);
    switch (choice){
    case p:
        printf("Pass");
        break;
    case f:
        printf("Fail");
        break;
    default:
        break;
    }
}