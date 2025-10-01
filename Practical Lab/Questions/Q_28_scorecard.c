#include<stdio.h>

struct Student
{
    char name[50];
    float AI;
    float Linux;
    float C;
    float Maths;
    float DSA;
    float percentage;
};

int main(){
    struct Student student[20];
    for(int i=0;i<3;i++){
        printf("Enter name of student:");
        scanf("%[^\n]c",&student[i].name);
        printf("Enter AI marks:");
        scanf("%f",&student[i].AI);
        printf("Enter Linux marks:");
        scanf("%f",&student[i].Linux);   
        printf("Enter C marks:");
        scanf("%f",&student[i].C);
        printf("Enter Maths marks:");
        scanf("%f",&student[i].Maths);   
        printf("Enter DSA marks:");
        scanf("%f",&student[i].DSA);  
    }
    for(int i=0;i<3;i++){
        student[i].percentage=(student[i].AI+student[i].C+student[i].Linux+student[i].Maths+student[i].DSA)/5;
    }
    for(int i=0;i<3;i++){
        printf("Student %s has score of %.2f%%\n",student[i].name,student[i].percentage);
    }
    return 0;
}