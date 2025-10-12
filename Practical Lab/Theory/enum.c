#include<stdio.h>
enum Days{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
int main(){
    enum Days now;
    now=Wednesday;
    printf("%d\n",now);
}