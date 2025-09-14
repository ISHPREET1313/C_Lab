// Ques :take input from user name and phone number and display

#include<stdio.h>

int main(){
    int phone_number;
    char name;
    printf("Enter Your Name : ");
    scanf("%c",&name);  // here as used c so only first charchter to print
    printf("Enter Your phone number : ");  
    scanf("%d",&phone_number); // here as int so only 9 number can be printed if use 10 number then it would print something else 
    printf("Name = %c\n",name);
    printf("Phone Number = %d", phone_number);

    return 0;
}