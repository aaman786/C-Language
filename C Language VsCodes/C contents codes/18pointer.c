
#include <stdio.h>
int main()
{
    int x = 5;
    int *ptra = &x; //&x is for storing the adress of x or pointing x.

    printf("The value of x is %d \n", x);
    printf("The value of x by pointer is %d \n", *ptra);

    printf("The adress of x is %p \n", &x); //printing adress of x

    printf("The adress of pointer to x is %x \n", &ptra); //%x is for printing address of pointer but Hexadecimal number
    printf("The adress of pointer to x is %p", ptra);     //%p is for printing address of pointer
    return 0;
}