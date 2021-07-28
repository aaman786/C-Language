#include<stdio.h>
int main()

{   char operator;
    double a,b;

    printf("Enter an operator to perform an operation: \t");
    scanf("%c",&operator);

    printf("Enter the 1st Number:\t");
    scanf("%lf",&a);
    printf("Enter the 1st Number:\t");
    scanf("%lf",&b);

    switch (operator)
    {
        case '+':
        printf("%.1lf + %.1lf= %.1lf", a,b,a+b);
        break;

         case '-':
        printf("%.1lf + %.1lf= %.1lf", a,b,a-b);
        break;

         case '*':
        printf("%.1lf + %.1lf= %.1lf", a,b,a*b);
        break;

        case '/':
        printf("%.1lf + %.1lf= %.1lf", a,b,a/b);
        break;
    }
    return 0;
}
