#include <stdio.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    ptr = fopen("Cnt55Bill.txt", "r");
    char *string[200];
    fgets(string,200,ptr);
    printf("The bill template in the file was: %s", string);
    return 0;
}
