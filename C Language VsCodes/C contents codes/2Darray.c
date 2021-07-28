// C program to store temperature of two cities of a week and display it.
#include <stdio.h>
const city = 2;
const week = 7;
int main()
{
    int temprature[2][7];

    // Using nested loop to store values in a 2d array
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < week; j++)
        {
            printf("City: %d, Day: %d =>", i + 1, j + 1);
            scanf("%d", &temprature[i][j]);
        }
    }

    printf("Displaying your Entry \n");

    // Using nested loop to display vlues of a 2d array
    for (int i = 0; i < city; i++)
    {
        for (int j = 0; j < week; j++)
        {
            printf("City: %d, Day: %d =>%d \n", i + 1, j + 1, temprature[i][j]);
        }
    }

    return 0;
}