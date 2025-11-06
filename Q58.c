#include <stdio.h>

struct book
{
    char title[10];
    char author[20];
    double price;
    int pages;
} book1, book2;

int main()
{
    struct book book1 = {"let uc C", "Yashwant kanetkar", 675.50, 375};

    book2 = book1;

    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Price: %lf\n", book2.price);
    printf("pages: %d\n", book2.pages);
}
