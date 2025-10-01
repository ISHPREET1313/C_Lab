#include<stdio.h>

int fibonacci(int);

int main(){
    int num;
    printf("Enter number till want fibonnacci series:");
    scanf("%d",&num);    
    int arr[50];
    int i;
    for(i=0;;i++){
        arr[i]=fibonacci(i);
        if(arr[i] > num)
            break;
    }
    for(int j=0;j<i;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}