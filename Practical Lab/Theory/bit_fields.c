#include<stdio.h>

struct error_info{
    unsigned int error:1;
    unsigned int error1:3;
    unsigned int error2:2;
    unsigned int error3:2;
   

    // int flag;
};
int main(){
    struct error_info e1;
    // e1.flag=2;
    // printf("%d\n",sizeof(e1.flag));
    printf("%d\n",sizeof(struct error_info));
    // printf("%d",sizeof(e1.error));
    
    int x=1;
    if(x>5){
        e1.error=0;
    }
    else{
        e1.error=2;
    }
    printf("%d",e1.error);
    return 0;
}