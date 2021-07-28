#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int* a,b;   // Here a is only pointer not b;
    typedef int* intpointer;
    intpointer a,b; //here I made both a and b pinters. 
    int c=10;
    a=&c;
    b=&c;
    printf("a=%d\n",*a);
    printf("b=%d",*b);
    return 0;
}
