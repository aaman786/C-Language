#include <stdio.h>
#include <stdlib.h>

int main()
{
    int characters, i = 0;
    char *ptr;

    while (i < 3)
    {
        printf("Employ %d; Enter the number of Characters you had in your Employ Id: ", i + 1);
        scanf("%d", &characters);
        ptr = (char *)malloc(characters + 1 * sizeof(char));
        printf("Enter your Employ Id: \n");
        scanf("%s", ptr);
        printf("Employ %d Id is: %s \n", i + 1, ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}