// you have to explain concept of pointer arrays and pointer to array

#include<stdio.h>

int main(){
    int count;
    printf("Enter how manny elements:");
    scanf("%d",&count);
    int arr[count];
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    printf("Pointer to array:  ");
    for(int i=0;i<count;i++){
        printf("%d",*(p+i));
        if(i<count-1){
            printf(",");
        }
    }

    printf("\n");

    printf("Pointer array: ");
    int (*pa)[count];
    for(int i=0;i<count;i++){
        *pa[i]=&arr[i];
    }
    for(int i=0;i<count;i++){
        printf("%d",pa[i]);
        if(i<count-1){
            printf(",");
        }
    }
    
    return 0;
}