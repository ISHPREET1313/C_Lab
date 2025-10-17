// Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACTNo = 1, if n = 0. Otherwise, FACTNo = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. Tabulate the results for different values of n and r with suitable messages.

#include <stdio.h>

int rec_fact(int);
int fact(int);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("\nn\tr\tbinomial Coefficient\n");
    printf("-------------------------------------\n");
    for (int r = 0; r <= n; r++){
        int coeff = rec_fact(n) / (fact(r) * rec_fact(n - r));
        if (r == n / 2 && n != 0 && n % 2 == 0){
            printf("%d\t%d\t        %d value starts to go back\n", n, r, coeff);
        }
        else if (r == n / 2 & n != 0 && n % 2 != 0){
            printf("%d\t%d\t        %d\n", n, r, coeff);
            printf("\t\t\t   value starts to go back\n");
        }
        else{
            printf("%d\t%d\t        %d\n", n, r, coeff);
        }
    }
    return 0;
}

int rec_fact(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * rec_fact(n - 1);
}

int fact(int n){
    int ans = 1;
    for (int i = n; i > 1; i--){
        ans *= i;
    }
    return ans;
}