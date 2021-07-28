#include <Stdio.h>
int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return (1);
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
int main()
{
    int n;
    printf("Enter a number to find a factorial \n ");
    scanf("%d", &n);
    printf("The factorial of number %d is %d \n", n, factorial(n));
}