#include<stdio.h>

int main(){
    FILE *fp;
    char text[100];
    fp=fopen("temp.txt","w");
    if(fp==NULL){
        printf("file is empty");
    }
    else{
        // fgets(text,7,fp);
        // printf("%s",text);
        
        fprintf(fp,"Hello! How are You , this is my first file handling program ");
        fclose(fp);
        fp=fopen("temp.txt","r");
        fgets(text,50,fp);
        printf("%s",text);
        
        fclose(fp);
    }
    return 0;
}