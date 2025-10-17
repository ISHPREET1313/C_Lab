//Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include<stdio.h>
void reverse(int*,int);

int main(){
    int count;
    printf("Enter No. of elements:");
    scanf("%d",&count);
    int arr[count];
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    printf("\nAfter Reversing ");
    reverse(arr,count);
    for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

void reverse(int* x,int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=x[i];
        x[i]=x[n-1-i];
        x[n-1-i]=temp;
    }
}

