#include <stdio.h>
#include <stdlib.h>

int palindrome(int n)
{
    int reversed = 0;
    int num2=n;     //Below we have used n more times at last it get disturb so i replaced

    while (n != 0)
    {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }
    printf("\n\nThe reversed number is: %d\n",reversed);

    if (reversed==num2)
    {
        return 0;
    }
    else
    {
        return 1;
    }  
}

int main()
{   system("cls");
    int num;
    printf("\nEnter a number to check it is Palindrome or not: ");
    scanf("%d", &num);

    if (palindrome(num) == 0)
    {
        printf("\n\nThe Entered number is a Palindrome number\n");
    }
    else
    {
        printf("It is  not a palindrome number\n");
    }
    return 0;
}
