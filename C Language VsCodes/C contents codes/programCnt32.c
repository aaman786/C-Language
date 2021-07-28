// Program for Displaying the Driver details of travel office
#include <stdio.h>
#include <string.h>
typedef struct Particular_Drivers
{
    char name[15];
    int Id;
    char route[7];
    int experiance;
} driver;

int main(int argc, char const *argv[])
{

    driver d1, d2, d3;
    printf("Name of Driver D1:  \n");
    scanf("%s", &d1.name);
    printf("Id of Driver D1:  \n");
    scanf("%d", &d1.Id);
    printf("Route of Driver D1:  \n");
    scanf("%s", &d1.route);
    printf("Experiance of Driver D1:  \n");
    scanf("%d", &d1.experiance);

    printf("\n\nName of Driver D2:  \n");
    scanf("%s", &d2.name);
    printf("Id of Driver D2:  \n");
    scanf("%d", &d2.Id);
    printf("Route of Driver D2:  \n");
    scanf("%s", &d2.route);
    printf("Experiance of Driver D2:  \n");
    scanf("%d", &d2.experiance);

    printf("\n\nName of Driver D3:  \n");
    scanf("%s", &d3.name);
    printf("Id of Driver D3:  \n");
    scanf("%d", &d3.Id);
    printf("Route of Driver D3:  \n");
    scanf("%s", &d3.route);
    printf("Experiance of Driver D3:  \n");
    scanf("%d", &d3.experiance);

    printf("\n\nDisplaying Information of the Drivers\n");
    printf("Name of Driver D1: %s\n", d1.name);
    printf("Id of Driver D1: %d\n", d1.Id);
    printf("Route of Driver D1: %s\n", d1.route);
    printf("Experiance of Driver D1: %d\n\n", d1.experiance);

    printf("Name of Driver D2: %s\n", d2.name);
    printf("Id of Driver D2: %d\n", d2.Id);
    printf("Route of Driver D2: %s\n", d2.route);
    printf("Experiance of Driver D2: %d\n\n", d2.experiance);

    printf("Name of Driver D3: %s\n", d3.name);
    printf("Id of Driver D3: %d\n", d3.Id);
    printf("Route of Driver D3: %s\n", d3.route);
    printf("Experiance of Driver D3: %d\n\2", d3.experiance);
    return 0;
}
