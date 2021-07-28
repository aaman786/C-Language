#include <stdio.h>

int sum(int arr[])
{
    int sum_of_array = 0;
    for (int i = 0; i < 4; ++i)
    {
        sum_of_array = sum_of_array + arr[i]; //sum_of_array += arr[i];
    }
    return sum_of_array;
}

int main()
{
    int result, array[] = {10,8,2,20};
    result = sum(array);
    printf("Result = %d", result);
    return 0;
}
