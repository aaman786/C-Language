#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{ /* 2 method of making string
     char str[] = {'T', 'o', 'm', 'm', 'y', '\0'};
     char str[6] = "Tommy"; */

    char str[9];
    printf("Using Custom function gets\n");
    gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}
