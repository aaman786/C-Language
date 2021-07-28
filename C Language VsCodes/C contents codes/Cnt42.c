// #include<stdio.h>
// #include"main.c" //Created main.c as a directive

// int main(int argc, char const *argv[])
// {
//     int var=0;
//     printf("This is me %d",var);
//      printf("\nI had used main.c as directive\n");
//     int a;
//     func(a);
//     return 0;
// }

// For #define directive
// #include <stdio.h>
// #define PI 3.14
// int main(int argc, char const *argv[])
// {
//     float var=PI;

//     printf("This is PI %.3f", var);
//     return 0;
// }

//for macros Directive
#include <stdio.h>
#define PI 3.14
#define square(r) r *r //here it is macros and r*r can be replaced by r+r, r-r
int main(int argc, char const *argv[])
{
    float var = PI;
    int r = 4;

    printf("The area of circle= %.3f", PI * square(r));
    return 0;
}