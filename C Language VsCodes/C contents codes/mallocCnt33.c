#include <stdio.h>
#include <stdlib.h>
 /* This header file is used for Dynamic 
Allocation which contains functions like malloc(), calloc(), realloc and free();*/

// Program for using malloc() function
int main()
{
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value %d: ", i);
        scanf("%d", &ptr[i]); //array is created here
    }
    for (int i = 0; i < 3; i++) //but here if I make i<4 than it will gie Garbage value
    {
        printf("\n\nThe value at %d of Array is: %d \n", i, ptr[i]);
    }
    return 0;
}

// //here i am taking n input of element of arrays from user to show memory is allocated at Run Time
// int main()
// {
//     int *ptr, n;

//     printf("Enter the size of Array you want: ");
//     scanf("%d", &n);
//     ptr = (int *)malloc(3 * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the value %d: ", i);
//         scanf("%d", &ptr[i]); //array is created here
//     }
//     for (int i = 0; i < n; i++) //but here if I make i<4 than it will gie Garbage value
//     {
//         printf("\n\nThe value at %d of Array is: %d \n", i, ptr[i]);
//     }
//     return 0;
// }