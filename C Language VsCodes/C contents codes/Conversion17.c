#include <stdio.h>

int main()
{

    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float a1, b;

    while (1)   //running until the break
    {
        printf("Enter the input character. q to quit\n       1. kms to miles\n       2. inches to foot\n       3. cms to inches\n       4. pound to kgs\n       5. inches to meters\n");

        scanf(" %c", &input);

        //    printf("The character is '%c'", input);
        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &a1);
            b = a1 * kmsToMiles;
            printf("%.2f Kms is equal to %.2f Miles\n\n\n", a1, b);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &a1);
            b = a1 * inchesToFoot;
            printf("%f Inches is equal to %f Foot\n", a1, b);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &a1);
            b = a1 * cmsToInches;
            printf("%f Cms is equal to %f Inches\n", a1, b);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &a1);
            b = a1 * poundToKgs;
            printf("%f Pounds is equal to Kgs %f \n", a1, b);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &a1);
            b = a1 * inchesToMeters;
            printf("%f inches is equal to %f meters \n", a1, b);
            break;

        default:
            printf("In default now");
            break;
        }
    }
end:

    return 0;
}
