#include<stdio.h>
int main(int argc, char const *argv[])
{   int a=54;
    int *ptr;
    ptr=&a;
    *ptr=44;
    return 0;
}
