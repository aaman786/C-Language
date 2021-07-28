#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s1[] = "Hello";
    char s2[]= "Univese";
    int compare;
    compare = strcmp(s1, s2);
    printf("After %d",compare);
    return 0;
}
