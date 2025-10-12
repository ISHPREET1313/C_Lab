#include<stdio.h>

// int main(){
//     int a[]={0,1,2,3,4,5,6,7};
//     int *p=a;
//     int sum=0;
//     for(int i=0;i<8;i++){
//         sum+=*(p++);//p+i
//     }
//     printf("%d",sum);
//     return 0;
// }

int main(){
    int a[]={50,15,55,6,3};
    int *p=&a[2];
    int *q=&a[3];
    printf("%d",q-p);
    printf("%d",q);
}