// It generally Combines the strings
#include <stdio.h>
#include <string.h>
int main()
{
    char stra[] = "C Prgramming or";
    char strb[] = "C Coding";

    strcat(stra, strb);
    printf("New string is: %s", stra);
    gets(stra);
    return 0;
}