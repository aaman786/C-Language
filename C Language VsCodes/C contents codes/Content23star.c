#include <stdio.h>
//Logic for Trangular Star Pattern
void Triangular_Star_Pattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

//Logic for Reverse Trangular Star Pattern
void Reverse_Triangular_Star_Pattern(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int type, rows;
    printf("Enter a number to choose a type of Star Pattern.\n\t\t 0 for Triangular Star Pattern, 1 for Reversed Triangular Star Pattern and 2 for both \n");
    scanf("%d", &type);
    printf("How many rows do you want? \n");
    scanf("%d", &rows);

    switch (type)
    {
    case 0:
        Triangular_Star_Pattern(rows);
        break;
    case 1:
        Reverse_Triangular_Star_Pattern(rows);
        break;
    case 2: //For Displaying Both patterns
        printf("Printing Trangular Star Pattern\n");
        Triangular_Star_Pattern(rows);
        printf("\nPrinting Reverse Trangular Star Pattern\n");
        Reverse_Triangular_Star_Pattern(rows);
        break;

    default:
        printf("Enter a Valid Choice");
        break;
    }
}