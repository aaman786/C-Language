#include <stdio.h>
#include <stdlib.h>
/* This header file is used for Dynamic 
Allocation which contains functions like malloc(), calloc(), realloc and free();*/

// Here using realloc() function
int main(int argc, char const *argv[])
{
    int *ptr, n;

    printf("Enter number of elemens you want: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of the array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe element %d of the array is: %d\n", i, ptr[i]);
    }

// using realloc()
    printf("Enter number of elemens you want for New array: ");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of the New array: ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe element %d of the New array is: %d\n", i, ptr[i]);
    }
    
    return 0;
}
