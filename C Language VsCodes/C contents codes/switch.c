#include<stdio.h>
int main()

{   char operator;
    int a,b;

    printf("Enter an operator to perform an operation: \t");
    scanf("%c",&operator);

    printf("Enter the 1st Number:\t");
    scanf("%d",&a);
    printf("Enter the 1st Number:\t");
    scanf("%d",&b);

    switch (operator)
    {
        case '+':
        printf("Addition of two numbers is:\n %d", a+b);
        break;

         case '-':
        printf("Subtraction of two numbers is:\n %d", a-b);
        break;

         case '*':
        printf("Multiplication of two numbers is:\n %d", a*b);
        break;

        case '/':
        printf("Divisioon of two numbers is:\n %d", a/b);
        break;
    }
    return 0;
}
