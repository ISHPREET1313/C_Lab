#include<stdio.h>
#include<string.h>
struct Student
{
    int sap;
    char name[50];
    float marks;
};

int main(){
    struct Student student[20];
    for(int i=0;i<3;i++){
        printf("Enter id:");
        scanf("%d",&student[i].sap);
        printf("Enter name of :");
        scanf("%s",&student[i].name);
        printf("Enter marks:");
        scanf("%f",&student[i].marks);   
    }
    for(int i=0;i<3;i++){
        printf("SAP id of Student %d : %d\n",i+1,student[i].sap);
        printf("Name of Student %d  : %s\n",i+1,student[i].name);
        printf("Marks of Student %d : %.2f\n",i+1,student[i].marks);
    }
    return 0;
}