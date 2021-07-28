#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    int *ptr;

    ptr = (int *)malloc(50 * sizeof(int));
    while (i < 100)
    {
        printf("Welcome to VS Code\n");
        if (i % 10 == 0)
        {
            getchar();
        }
        i++;
        free(ptr);      // Without this we will encounter a situation of memory leak
    }
    return 0;
}

