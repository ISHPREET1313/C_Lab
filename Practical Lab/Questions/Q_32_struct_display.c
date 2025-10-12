#include<stdio.h>
#include<string.h>

struct Student{
    int rollno;
    char name[50];
};

void display(struct Student);
struct Student insert(int,char[]);

void display(struct Student x){
    printf("%d ",x.rollno);
    printf("%s",x.name);
}

struct Student insert(int x,char y[]){
    struct Student s;
    s.rollno=x;
    strcpy(s.name,y);
    return s;
}

void main(){ 
    int Rno;
    char Name[50];
    struct Student s2;
    printf("Enter name:");
    fgets(Name,50,stdin);
    printf("Enter Roll Number:");
    scanf("%d",&Rno);
    s2=insert(Rno,Name);
    display(s2);
}
