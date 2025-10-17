// Develop a C function ISPRIME (num) that accepts an integer argument and returns 1 if the argument is prime, a 0 otherwise. Write a C program that invokes this function to generate prime numbers between the given ranges.

#include<stdio.h>

int isPrime(int);

int main(){
    int start,end;
    printf("Give a range(Eg:-5 to 9 by 5 9):");
    scanf("%d %d",&start,&end);
    printf("Prime numbers in %d to %d\n",start,end);
    for(int i=start;i<=end;i++){
        int ans=isPrime(i);
        if(ans==1){
            printf("%d ",i);
        }
    }
    return 0;
}

int isPrime(int x){
    int factors=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            factors++;
        }
    }
    if(factors==2){
        return 1;
    }
    else{
        return 0;
    }
}