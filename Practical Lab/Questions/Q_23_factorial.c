#include<stdio.h>

int rec_fact(int);
int fact(int);

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("\nn\tr\tbinomial Coefficient\n");
    printf("-------------------------------------\n");
    for(int i=0;i<=n;i++){
        for(int r=0;r<=i;r++){
           int coeff=rec_fact(i)/(fact(r)*rec_fact(i-r));
           if(r==i/2&&i!=0&&i%2==0){
                printf("%d\t%d\t        %d value starts to go back\n",i,r,coeff);
            }
            else if (r==i/2&&i!=0&&i%2!=0)
            {
                printf("%d\t%d\t        %d\n",i,r,coeff);
                printf("\t\t\t   value starts to go back\n");
            }
            
           else{
                printf("%d\t%d\t        %d\n",i,r,coeff); 
           }
        }
        printf("\n");
    }
    return 0;
}

int rec_fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*rec_fact(n-1);
}

int fact(int n){
    int ans=1;
    for(int i=n;i>1;i--){
        ans*=i;
    }
    return ans;
}