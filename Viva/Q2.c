//Design a code that will have struccture of anything and input from user

#include<stdio.h>

struct Employees {
    int ID;
    char Name[35];
    int age;
    char Depart[35];
};

void enter_employees(struct Employees E[],int);
void print_employees(struct Employees E[],int);

int main(){
    int n;
    printf("Enter How many Employees to add:");
    scanf("%d",&n);
    struct Employees E[n];
    enter_employees(E,n);
    printf("\nEntering Entered Employees to file\n");
    print_employees(E,n);
    return 0;
}

void enter_employees(struct Employees E[],int n){
    for(int i=0;i<n;i++){
        printf("Enter Id:");
        scanf("%d",&E[i].ID);
        printf("Enter Age:");
        scanf("%d",&E[i].age);
        printf("Enter Name:");
        scanf("%s",&E[i].Name);
        printf("Enter Department:");
        scanf("%s",&E[i].Depart);
    }
}

void print_employees(struct Employees E[],int n){
    FILE *fp;
    fp=fopen("Employee.txt","w");
    for(int i=0;i<n;i++){
        fprintf(fp,"Employee 1\n");
        fprintf(fp,"\tId = %d\n",E[i].ID);
        fprintf(fp,"\tName = %s\n",E[i].Name);
        fprintf(fp,"\tAge = %d\n",E[i].age);
        fprintf(fp,"\tDepartment = %s\n\n",E[i].Depart);
    }
    fclose(fp);
    printf("\nEmployees added to file");
}