#include<stdio.h>

int main(){
    int x;
    printf("Enter value of x before  = %d",x);
    scanf("%d",&x); // if use only x then it will only connect to x but not save it to file i.e just creating a copy and putting it there not telling it save  
    printf("Value of x = %d",x);
    return 0;
}
