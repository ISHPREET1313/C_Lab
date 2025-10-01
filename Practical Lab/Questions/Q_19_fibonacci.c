#include<stdio.h>
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return fibonacci(0),fibonacci(0)+1;
    }
    else{
        printf("%d ",(fibonacci(n-1)+fibonacci(n-2)));
    }
}
int main(){
    printf("%d",fibonacci(2));
    return 0;
}