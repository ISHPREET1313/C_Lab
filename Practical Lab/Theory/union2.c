#include<stdio.h>

union Student{
    int rollno;
    float marks;
    char x;
};
int main(){
    union Student s1;
    s1.rollno=1000;
    union Student *p;
    p=&s1;
    printf("%d\n",s1.rollno);
    printf("%d\n",(*p).rollno);
    printf("%d",sizeof(union Student));
    return 0;
}