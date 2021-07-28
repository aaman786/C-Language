// Void Pointer Concept
#include <stdio.h>
int main()
{
    int a = 26;
    float b = 2.9;
    void *ptr;
    ptr = &a;
    ptr = &b;
    // printf("The value of a is %d", *ptr);    // it will throw an error.
    printf("The value of a is %d\n", *((int *)ptr));
    
    printf("The value of b is %.2f", *((float *)ptr));
    return 0;
}