#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float Edistance(int x1, int y1, int x2, int y2)
{
    int a = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);
    return sqrt(a);
}

float areaofcircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2)) //passing to Edistance function
{
    return distance(x1, y1, x2, y2);
} // here reurns to Edistance function
int main()
{
    int x1, y1, x2, y2;
    float dst;
    printf("Enter the Value of x1: ");
    scanf("%d", &x1);

    printf("Enter the Value of y1: ");
    scanf("%d", &y1);

    printf("Enter the Value of x2: ");
    scanf("%d", &x2);

    printf("Enter the Value of y2: ");
    scanf("%d", &y2);

    dst = areaofcircle(x1, y1, x2, y2, Edistance);

    printf("The distance: %.2f", dst);

    return 0;
}
