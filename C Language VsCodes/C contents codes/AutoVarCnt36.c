// For Understanding External  Vsrisbles
#include <stdio.h>

int func(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int func2(int c)
{
    static int myvar=1;
    myvar++;
    printf("\nThe value is: %d", myvar);

    return myvar;
}

int main()
{
    int sum = func(3, 2);
    printf("My sum is: %d", sum);
    
    int myvar;
    myvar = func2(sum);
    myvar = func2(sum);
    myvar = func2(sum);

    return 0;
}
