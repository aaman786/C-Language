#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void Hello_input_and_execute(int (*fptr)(int, int))
{
    printf("\nHello\n");
    printf("The sum is(In HELLO): %d", fptr(7, 3));
}

void gm_input_and_execute(int (*fptr)(int, int))
{
    printf("\nGood Morning\n");
    printf("The sum is(In Gm): %d\n", fptr(4, 2));
}
int main(int argc, char const *argv[])
{
    system("cls");
    int (*ptr)(int, int);
    ptr = sum; 
    printf("The sum is(for check): %d\n", sum(2, 3));
    gm_input_and_execute(ptr);
    Hello_input_and_execute(ptr);

    return 0;
}
