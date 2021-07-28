#include <stdio.h>
#include <stdlib.h>
 /* This header file is used for Dynamic 
Allocation which contains functions like malloc(), calloc(), realloc and free();*/

// // Here using Calloc() function
//  int main()
// {
//     int *ptr, n;

//     printf("Enter the size of Array you want: ");
//     scanf("%d", &n);
//     ptr = (int *)calloc(n,sizeof(int)); //here No of blocks are also send along with size

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


// Here using Calloc() function but only Diplaying output
 int main()
{
    int *ptr;
    int n;
    
    printf("Enter the size of Array you want: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n,sizeof(int)); //here No of blocks are also send along with size
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value %d: ", i);
    //     scanf("%d", &ptr[i]); //array is created here
    // }
    for (int i = 0; i < n; i++) 
    {
        printf("The value at %d of Array is: %d \n", i, ptr[i]);
    }
    return 0;
    // values are initialized by 0 so this is the extra overhead in calloc()
    //So don't use calloc() when you don't want intialized memory with 0
    // and I think this would be extra to make 0 and this will create inefficiency 
}