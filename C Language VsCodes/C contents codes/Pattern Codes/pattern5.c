//left reverse triangular 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count = 0;
    for (int i = 6; i >= 1; i--)
    {
        for (int j = 1; j <= count; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
        count++;
    }

    return 0;
}
