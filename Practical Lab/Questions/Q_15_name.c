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

    char user_name[100];
    
    printf("Enter name:");
    scanf("%20s",user_name);
    printf("%s",user_name);
   

    return 0;
}