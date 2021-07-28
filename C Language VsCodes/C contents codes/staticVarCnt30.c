// For Explaining Static ariables
#include <stdio.h>
int b=46;
int func(int b1)
{
    static int myvar = 4;
    printf("The value of b is: %d\n", myvar);
    myvar++;
    return 0;   //return = b1 +myvar;
}
int main()
{
    int a ;
    func(a);
    func(a);
    func(a);
    // int *ptr = &a;
    return 0;
}
