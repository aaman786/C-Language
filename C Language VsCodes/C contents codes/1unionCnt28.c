#include <stdio.h>
#include <string.h>

union Book
{
    char title[15];
    float price;
    int pages;
};

int main()
{
    union Book b1;
    strcpy(b1.title, "programming");
    printf("Title= %s\n", b1.title);

    b1.price = 250.30;
    printf("Price= %.2f\n", b1.price);
    b1.pages = 173;
    printf("Pages= %d\n", b1.pages);

    return 0;
}