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
    int i;
    printf("Enter name:");

    for(i=0;i<100;i++){
        scanf("%c",&user_name[i]);
        if (user_name[i] == '\n') {
            break;
        }
    }
    for (int j=0;j<i;j++){
       printf("%c",user_name[j]);
    }

    return 0;
}