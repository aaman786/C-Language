#include<stdio.h>
int main(int argc, char const *argv[])

{   int num;            //int num,i=0;
    printf("Enter a number \t");
    scanf("%d",&num);

    for ( int i = 0; i < num; i++)
    {
        goto label;

    label:
    printf("%d \n",i);
    }
    return 0;
}
