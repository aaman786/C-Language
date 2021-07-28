#include <stdio.h>
void reverse(int array[])
{    //Logic for swapping the elements of array till 4.
    for (int i = 0; i < 7/2; i++)
    {   
        int temp;
        temp=array[i];
        array[i]=array[6-i];
        array[6-i]=temp;
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 67};
    printf("\nBefore Reversing Array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The %d element of Array is: %d \n", i, array[i]);
    }

    reverse(array);

    printf("\nAfter Reversing Array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The Value at %d element is: %d \n",i,array[i]);
    }
    

    return 0;
}