#include<stdio.h>
#include<string.h>
struct Student
{
    int sap;
    char name[50];
    float marks;
};

int main(){
    // int num;
    // printf("how many studeents to add:");
    // scanf("%d",&num);
    int id;
    char name[50];
    float marks;
    struct Student student1;
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter id:");
    scanf("%d",&id);
    printf("Enter marks:");
    scanf("%f",&marks);   
    
    student1.sap=id;
    student1.marks=marks;
    strcpy(student1.name,name);
    printf("SAP id : %d\n",student1.sap);
    printf("Name : %s\n",student1.name);
    printf("Marks : %.2f\n",student1.marks);
    return 0;
}