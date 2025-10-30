//Create a union containing 6 strings: name, home_address, hostel_address, city, state and zip. Write a C program to display your present address.

#include<stdio.h>
#include<string.h>

union address{
    char name[25];
    char home_address[50];
    char hostel_address[50];
    char city[25];
    char state[25];
    char zip[10];
};
int main(){
    union address present_address;

    strcpy(present_address.name,"Ishpreet Singh");
    printf("%s ,",present_address.name);
    strcpy(present_address.home_address,"Ludhiana");
    printf(" %s ,",present_address.home_address);
    strcpy(present_address.hostel_address,"Bidholi");
    printf(" %s ,",present_address.hostel_address);
    strcpy(present_address.city,"Dehradun");
    printf(" %s ,",present_address.city);
    strcpy(present_address.state,"Uttarakhand");
    printf(" %s ,",present_address.state);
    strcpy(present_address.zip,"248007");
    printf(" %s",present_address.zip);

    // char t_name[25],t_home_address[50],t_hostel_address[50],t_city[25],t_state[25],t_zip[10];
    // fgets(t_name,25,stdin);
    // fgets(t_home_address,25,stdin);
    // fgets(t_hostel_address,25,stdin);
    // fgets(t_city,25,stdin);
    // fgets(t_state,25,stdin);
    // fgets(t_zip,25,stdin);
    // printf("\nPresent Address:\n");
    // strcpy(present_address.name,t_name);
    // printf("%s",present_address.name);
    // strcpy(present_address.home_address,t_home_address);
    // printf("%s",present_address.home_address);
    // strcpy(present_address.hostel_address,t_hostel_address);
    // printf("%s",present_address.hostel_address);
    // strcpy(present_address.city,t_city);
    // printf("%s",present_address.city);
    // strcpy(present_address.state,t_state);
    // printf("%s",present_address.state);
    // strcpy(present_address.zip,t_zip);
    // printf("%s",present_address.zip);
    return 0;
}