#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, sum = 0;
    int a[10][10], b[10][10], result[10][10];

    system("cls");
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);

    printf("\n\nEnter the first matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the %d %d element of first matrix:\t", i, j);
            scanf("%d \t", &a[i][j]);
            // printf("\t");
        }
         printf("\n");
    }
    printf("\n\nEnter the second matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the %d %d element of second matrix:\t", i, j);
            scanf("%d ", &b[i][j]);
            getchar();
            // printf("\t");
        }
        // printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Calculate the result
            for (int k = 0; k < c; k++)
            {   
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //Print the resultant matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // Print the result
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
