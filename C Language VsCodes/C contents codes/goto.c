#include<stdio.h>
int main(int argc, char const *argv[])

{   int num;
    printf("Enter a number to chech wheather it Odd or Even number: \t");
    scanf("%d",&num);

    if (num%2==0) {
        goto Even;

        Even:
    printf("The entered number is Even number \n");
    }

    else {
        goto Odd;

        Odd:
    printf("The Entered number is Odd number \n");
    }

        return 0;
}
