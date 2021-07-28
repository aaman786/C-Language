#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter a value: \n q for quiting \n 1 for kmsToMiles \n 2 for inchesToFoot \n 3 for cmsToInches \n 4 for poundToKgs \n 5 for inchesToMeters \n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting \n");
            goto end;
            break;

        default:
            //printf("In default now. \n");
            break;
        }
    }
end:
    return 0;
}
