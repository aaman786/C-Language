#include <stdio.h>
#include <string.h>
struct distance
{
    int feet;
    float inches;
} d1, d2, sum;
int main()
{
    printf("Enter 1st Distance\n");
    printf("Enter feet Distance d1:  ");
    scanf("%d", &d1.feet);
    printf("Enter inches Distance d1:  ");
    scanf("%f", &d1.inches);

    printf("\n\nEnter 2nd Distance \n");
    printf("Enter feet Distance d2:  ");
    scanf("%d", &d2.feet);
    printf("Enter feet Distance d2:  ");
    scanf("%f", &d2.inches);

    //adding feet
    sum.feet = d1.feet + d2.feet;
    printf("\nSum of feet is: %d\n", sum.feet);
    //adding inches
    sum.inches = d1.inches + d2.inches;
    printf("Sun of inches is: %.2f", sum.inches);
   
    //converrting to feet if inch is greater than 12
    while (sum.inches >= 12)
    {
        sum.inches -= 12;   //sum.inches = sum.inches - 12
        sum.feet++;
    }

    printf("\n\nSum of distances = %d\'-%.1f\"", sum.feet, sum.inches);
    return 0;
}