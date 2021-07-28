//Upload to content no 22 at last
#include <stdio.h>
/*void func1(int arr[4][4])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The Value at %d,%d is: %d\n", i, j, arr[i][j]);
        }
    }
}*/

void func2(int *arr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The Value at %d,%d is: %d\n", i, j, *(arr + i);
        }
    }
}

int main()
{
    int arr[][4] = {{2, 4, 6, 8}, {1, 3, 5, 7}};
    //func1(arr);
    func2(arr);
    return 0;
}