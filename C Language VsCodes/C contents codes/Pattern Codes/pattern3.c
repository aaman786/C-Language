//reverse triangular pattern
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int i = 5; i >= 1; i--) //4
    {
        for (int j = i; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
