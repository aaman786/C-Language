// program to find the average of n numbers using arrays
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, number[5];
    double average, sum = 0;

    printf("Enter the numbers of elements you want to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Element E%d: ", i + 1);
        scanf("%d", &number[i]);
        sum = sum + number[i]; //sum += number[i];
    }

    printf("The sum is %.3lf \n", sum);
    average = sum / n;
    printf("The average is %.3lf", average);
    return 0;
}
