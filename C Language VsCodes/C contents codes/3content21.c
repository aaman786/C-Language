#include <stdio.h>

void changeValue(int *address)
{
    *address = 786000;
}

int main()
{
    int a = 26;
    printf("The value of a is %d\n", a);
    changeValue(&a);
    printf("Now, The value of a  is %d\n", a);
    return 0;
}