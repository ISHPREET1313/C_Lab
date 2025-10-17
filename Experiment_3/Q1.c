//WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.

#include<stdio.h>

int main(){
    int count,temp,n;
    printf("Enter how many numbers:");
    scanf("%d",&count);
    int arr[count];
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    temp=arr[0];
    for(n=0;n<count;n++){
        if(temp!=arr[n]){
            break;
        }
    }
    printf("Second largest is %d",arr[n]);
    return 0;
}