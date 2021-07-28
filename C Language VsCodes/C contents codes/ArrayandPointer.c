#include <stdio.h>
int main()
{
    int arr[] = {100,52,3,10,5,6,67};
    int* arrayptr = arr;
    printf("1) Value at position 3 of the array is %d\n\n", arr[3]);

    printf("2) The address of first element of the array is: \t %d  \n", &arr[0]);
    printf("3) The address of first element of the array is: \t %d \n\n", arr);

    printf("5) The address of second element of the array is: \t %d \n\n", arr + 1);

    printf("6) The address of third element of the array is: \t %d \n", &arr[2]);
    printf("7) The address of third element of the array is: \t %d \n\n", arr + 2);
    // arr--; // this line will throw an error

    printf("1) The value at address of first element of the array is: \t %d \n", *(&arr[0]));
    printf("2) The value at address of first element of the array is: \t %d \n", arr[0]);
    printf("3) The value at address of first element of the array is: \t %d \n\n", *(arr));

    printf("4) The value at address of second element of the array is: \t %d \n", *(&arr[1]));
    printf("5) The value at address of second element of the array is: \t %d \n", arr[1]);
    printf("6) The value at address of second element of the array is: \t %d \n", *(arr + 1));

    return 0;
}
