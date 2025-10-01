#include<stdio.h>

int main(){
    int limit=20,a,b,c,d,sum1,sum2;
    for(a=1;a<=limit;a++){
        for(b=a;b<=limit;b++){
            for(c=a+1;c<=limit;c++){
                for(d=c;d<=limit;d++){
                    sum1=(a*a*a)+(b*b*b);
                    sum2=(c*c*c)+(d*d*d);
                    if (sum1==sum2){
                        printf("%d = %d^3+%d^3 = %d^3+%d^3\n",sum1, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}