//  Calculator using Command line
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    char *operation;
    int n1, n2;
    operation = argv[1]; // substituion of argv string format
    n1 = atoi(argv[2]);  //atoi is for converting the int into string
    n2 = atoi(argv[3]);

    // Displaying the inputs in terminal as we make main's body variables Equal to the argv elements.
    printf("Operation is: %s \n", operation);
    printf("N1 is: %d\n", n1);
    printf("N2 is: %d\n", n2);

    //amking the operations
    if (strcmp(operation, "add") == 0)
    {
        printf("Addition is: %d\n", n1 + n2);
    }
    else if (strcmp(operation, "subb") == 0)
    {
        printf("Subtaction is: %d\n", n1 - n2);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("Multiplication is: %d\n", n1 * n2);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("Dividation is: %d\n", n1 / n2);
    }
    
    return 0;
}
