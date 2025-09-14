#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul, div, choice;
    char exit='n';
    while (exit!='y')
    {
        printf("Enter 1st number:");
        scanf("%d", &num1);
        printf("Enter 2nd number:");
        scanf("%d", &num2);
        printf("MENU:\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
        printf("Enter Your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            sum = num1 + num2;
            printf("Addition of %d and %d is %d\n", num1, num2, sum);
            break;
        case 2:
            sub = num1 - num2;
            printf("Subtraction of %d and %d is %d\n", num1, num2, sub);
            break;
        case 3:
            mul = num1 * num2;
            printf("Multiplication of %d and %d is %d\n", num1, num2, mul);
            break;
        case 4:
            if(num2!=0){
                div = num1 / num2;
                printf("Division of %d and %d is %d\n", num1, num2, div);
            }
            else{
                printf("Divison not possible\n");
            }
            break;
        default:
            printf("Invalid choice\n");
        }
        printf("Want to exit(y/n):");
        scanf(" %c",&exit);
    }
    return 0;
}