#include<stdio.h>
#include<string.h>
struct Student{
    int rollno;
    char name[50];
}s1;

int main(){ 
    s1.rollno=101;
    strcpy(s1.name,"Ishpreet");
    printf("%d",sizeof(struct Student));
    return 0;
}