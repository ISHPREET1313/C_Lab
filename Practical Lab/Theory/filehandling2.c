#include<stdio.h>

int main(){
    FILE *fp;
    char text[100];
    fp=fopen("temp.txt","r+");
    if(fp==NULL){
        printf("file is empty");
    }
    else{
        fprintf(fp,"NEW____Hello! How are You , this is my first file handling program ");
        fgets(text,50,fp);
        printf("%s",text);
        
        fclose(fp);
    }
    return 0;
}