#include<stdio.h>

struct Student{
    int rollno;
    int marks;
};
int main(){
    struct Student s1;
    s1.rollno=1000;
    s1.marks=97;
    struct Student *p;
    p=&s1;
    printf("%d\n%d",(*p).rollno,p->marks);
    return 0;
}