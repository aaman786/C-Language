// Code for Predefind Macros
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    printf("Today's Date is: %s \n",__DATE__);
    printf("Now Time is: %s \n",__TIME__);
    printf("This file Name is: %s \n",__FILE__);
    printf("Line number is: %d \n",__LINE__);
    printf("ANSI is USed?: %d \n",__STDC__);
    return 0;
}
