#include<stdio.h>

int gcd(int,int);

int main(){
    int num1,num2,hcf;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    hcf=gcd(num1,num2);
    printf("GCD of %d and %d is %d",num1,num2,hcf);
    return 0;
}
int gcd(int n1, int n2) {
    if(n1==0){
        return n2;
    }
    if(n2==0){
        return n1;
    }
    static int var = 0;
    if (var == 0)
        var = (n1 < n2) ? n1 : n2;
    if (n1 % var == 0 && n2 % var == 0) {
        int result = var;
        var = 0;
        return result;
    }
    var--;
    return gcd(n1, n2);
}