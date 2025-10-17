// Develop a function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.

#include<stdio.h>
#include<string.h>

void rev_str(char*);

int main(){
    printf("Enter string:");
    char str[20],temp;
    fgets(str, sizeof(str), stdin);
    rev_str(str);
    printf("%s",str);
    return 0;
}

void rev_str(char arr[]){
    char temp;
    int n=strlen(arr);
    for(int i=0;i<((n-1)/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-2];
        arr[n-i-2]=temp;
    }
}