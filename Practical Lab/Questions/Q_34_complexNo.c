/*1.	Write a C program that uses functions to perform the following operations: 
a.	Reading a complex number. 
b.	Writing a complex number. 
c.	Addition and subtraction of two complex numbers 
Note: represent complex number using a structure.
*/
#include<stdio.h>
#include<string.h>

struct Complex
{
    float real;
    float imaginary;
};

struct Complex read_complex();
void write_complex(struct Complex);
struct Complex add_sub_complex(struct Complex,struct Complex,char []);

int main(){
    struct Complex a,b,c,d;
    printf("Enter First complex number\n");
    a=read_complex();
    write_complex(a);
    printf("Enter Second complex number\n");
    b=read_complex();
    write_complex(b);

    c=add_sub_complex(a,b,"add");
    printf("Addition=");
    write_complex(c);

    d=add_sub_complex(a,b,"sub");
    printf("Subtraction=");
    write_complex(d);
    return 0;
}

struct Complex read_complex(){
    struct Complex c;
    printf("Enter Real Part:");
    scanf("%f",&c.real);
    printf("Enter Imaginary Part:");
    scanf("%f",&c.imaginary);
    return c;
}

void write_complex(struct Complex c){
    printf("%.1f + i%.1f\n",c.real,c.imaginary);
}

struct Complex add_sub_complex(struct Complex c1,struct Complex c2,char operator[3]){
    struct Complex c;
    if(strcmp(operator,"add")){
        c.real=c1.real+c2.real;
        c.imaginary=c1.imaginary+c2.imaginary;
    }
    else if(strcmp(operator,"sub")){
        c.real=c1.real-c2.real;
        c.imaginary=c1.imaginary-c2.imaginary;
    }
    else{
        printf("Invalid Input");
    }
    return c;
}