// WAP to read a list of integers and store it in a single dimensional array. Write a C program to find the frequency of a particular number in a list of integers.

#include<stdio.h>

int main(){
    int count,freq=0,search;
    printf("Enter how many numbers:");
    scanf("%d",&count);
    int arr[count];
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter Which number to get its frequency:");
    scanf("%d",&search);
    for(int i=0;i<count;i++){
        if(arr[i]==search){
            freq++;
        }
    }
    printf("Frequency of %d is %d",search,freq);
    return 0;
}