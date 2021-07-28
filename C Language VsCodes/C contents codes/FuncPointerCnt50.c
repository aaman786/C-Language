#include <stdio.h>
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int main(int argc, char const *argv[])
{
    printf("Addition of two numbers are %d \n", sum(2, 3));

    int (* fptr) (int ,int);  //creating a pointer 
    fptr=&sum;                  // pointing a pointer to a funcion
    // int d= fptr (4,2);    or   // it is dereferecing of pointer 
    printf("The sum using function pointer is %d",fptr(4,2));
    return 0;
}
