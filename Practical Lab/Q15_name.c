#include<stdio.h>

int main(){
    // char name[15]={'I','s','h','p','r','e','e','t'};

    // for (int i =0; i<15;i++){
    //     printf("%c",name[i]);
    // }
    // printf("\n");
    // char full_name[15]={'I','s','h','p','r','e','e','t',' ','S','i','n','g','h'};

    // for (int i =0; i<15;i++){
    //     printf("%c",full_name[i]);
    // }

    char user_name[15];
    printf("Enter name:");

    for(int i=0;i<15;i++){
        scanf("%c",&user_name[i]);
    }

    for (int i =0; i<15;i++){
       printf("%s",user_name[i]);
    }

    return 0;
}