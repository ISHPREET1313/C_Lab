#include<stdio.h>
#include<string.h>
union Student{
    int rollno;
    char name[30];
};
int main(){
    union Student s1;
    strcpy(s1.name,"Ishpreet");
    s1.rollno=1000;
    union Student *p;
    p=&s1;
    printf("%d\n",s1.rollno);
    printf("%d\n%s\n",(*p).rollno,p->name);
    printf("%d",sizeof(union Student));
    return 0;
}