#include<stdio.h>

int main(){
    int arr[10][10];
    int r,c;
    printf("Enter values:");
    for(r=0;r<2;r++){
        for (c= 0; c<3; c++)
        {   
            printf("Enter [%d][%d] element:",r,c);
            scanf("%d",&arr[r][c]);
        }
    }

    printf("The entered value:\n");
    for(r=0;r<2;r++){
        for (c= 0; c<3; c++)
        {
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}