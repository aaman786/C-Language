#include <stdio.h>
int main()
{
    int test[2][3][2];

    printf("Enter 12 numbers for testing \n");

//code for accepting users input
    for (int x = 1; x <= 12; x++)
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 2; k++)
                {
                    printf("Number %d: ", x++);
                    scanf("%d", &test[i][j][k]);
                }

//code for Displaying
    printf("\n Diplaying Test Values \n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 2; k++)
            {
                printf("Test Values for Number %d are: [%d] [%d] [%d] \n ", test[i][j][k], i, j, k);
            }

    return 0;
}