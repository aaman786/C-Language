#include <stdio.h>
#include <string.h>

struct book
{
    char title[15];
    char author_of_book[10];
    float price;
    int pages_of_book;
} b1, b2;
int main()
{
    struct book b1 = {"C Programming", "Charlie", 350.58, 180};
    printf("Displying b1 book details;\n");
    printf("Title: %s\n", b1.title);
    printf("Title: %s\n", b1.author_of_book);
    printf("Title: %.2f\n", b1.price);
    printf("Title: %d\n\n", b1.pages_of_book);

    printf("Displaying b2 book details;\n");
    struct book b2 = {"C Programming2", "James", 150.78, 192};
    printf("Title: %s\n", b2.title);
    printf("Title: %s\n", b2.author_of_book);
    printf("Title: %.2f\n", b2.price);
    printf("Title: %d\n", b2.pages_of_book);

    return 0;
}