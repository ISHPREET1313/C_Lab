#include<stdio.h>

typedef struct {
    int rollno;
    int marks;
}Student;
int main(){
    Student s1;
    s1.rollno=1000;
    s1.marks=97;
    Student *p;
    p=&s1;
    printf("%d\n%d",(*p).rollno,p->marks);
    return 0;
}