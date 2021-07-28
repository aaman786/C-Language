#include <stdio.h>
int main(int argc, char const *argv[])
{
    int matricA[2][2], matricB[2][2], resultmatricR[2][2];

    //[Code of 1st Matric] Taking user's input for Matric B as per place of element.
    printf("\n Enter the elements of Matric A (1st matric) \n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            printf("A%d%d:  ", i + 1, j + 1);
            scanf("%d", &matricA[i][j]);
        }

    //[Code of 2nd Matric] Taking user's input for Matric B as per place of element.
    printf("\n Enter the Elements of Matric B (2nd matric) \n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            printf("B%d%d: ", i + 1, j + 1);
            scanf("%d", &matricB[i][j]);
        }

    //code for calculation of sum of both Matrics A and B
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            resultmatricR[i][j] = matricA[i][j] + matricB[i][j];
        }

    //displaying the result
    printf("\n Sum Of Matrics (A+B): \n");

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
            printf("\t %d ", resultmatricR[i][j]);

            if (j == 1)          //this is for printing the second row from next line
                printf("\n");
        }
    return 0;
}
