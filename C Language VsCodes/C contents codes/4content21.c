#include <stdio.h>
int Changevalue(int* address)
{
    *address=78600;
}
void main()
{   int a=10;
    printf("The value of a is %d \n",a);
    Changevalue(&a);
    printf("Now Value is %d",a);
}