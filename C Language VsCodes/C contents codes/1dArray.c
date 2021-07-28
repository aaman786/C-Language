//Program to take 5 values from the user and store in array
//Print the elements stored in the array
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number[4];
    printf("Enter 4 numbers \n");

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("Diplaying your enterd numbers\n");

    for (int i = 0; i < 4; i++)
    {
        printf("The n%d: %d\n", i, number[i]);
    }
    return 0;
}
