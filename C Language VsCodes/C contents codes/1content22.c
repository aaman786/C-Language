#include <stdio.h>
void display(int *arr)
{
    printf("%d \t", *arr);
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
        display(&arr[i]);
}