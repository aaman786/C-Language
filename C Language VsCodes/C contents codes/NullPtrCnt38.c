// // Understanding Null pointer
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a = 34;
//     int *ptr = NULL;
//     printf("The address of a is %d\n", ptr);
//     printf("The value of a is %d", *ptr);
//     return 0;
// }
// // we get output as 0 becoz in most of compiler the value of null is (Void *)0


// For handling the Crash Error 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 34;
    int *ptr = NULL;

    if (ptr != NULL)
    {
        printf("The address of a is %d\n", ptr);
        printf("The value of a is %d", *ptr);
    }
    else{
        printf("The Null pointer is there and it can't be Dereferenced");
    }
    return 0;
}