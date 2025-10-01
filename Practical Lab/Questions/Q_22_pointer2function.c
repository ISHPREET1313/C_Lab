#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);

int main(){
    int sum,subt,mult;
    int (*fpa)(int,int)=&add;
    int (*fps)(int,int)=&sub;
    int (*fpm)(int,int)=&mul;
    sum=fpa(10,30);
    subt=fps(10,30);
    mult=fpm(10,30);
    printf("sum=%d\n",sum);
    printf("sub=%d\n",subt);
    printf("mul=%d\n",mult);
    return 0;
}

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}