#include<stdio.h>

// // command line arguments for pritting the number of Arguments.
// int main(int argc, char const *argv[])
// {
//     printf("The Value of argc is:~ %d", argc);
//     return 0;
// }

// here argc gives count while argv gives value.
int main(int argc, char const *argv[])
{
    printf("The Value of argc is:~ %d\n", argc);
    for (int  i = 0; i < argc; i++)
    {
        printf("The value of arument at index number %d has the value of %s  \n",i, argv[i]);
    }
    
    return 0;
}