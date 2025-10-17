// WAP to read a list of integers and store it in a single dimensional array. Write a C program to count and display positive, negative, odd, and even numbers in an array.

#include<stdio.h>

int main(){
    int count,pos=0,neg=0,odd=0,even=0;
    printf("Enter how many numbers:");
    scanf("%d",&count);
    int arr[count];
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<count;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]<0){
            neg++;
        }
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("number of times Positive=%d, Negative=%d, Even=%d, Odd=%d",pos,neg,even,odd);
    return 0;
}