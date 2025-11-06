#include <stdio.h>

struct book
{
    char title[10];
    char author[20];
    double price;
    int pages;
};

int main()
{
    struct book book1 = {"let uc C", "Yashwant kanetkar", 675.50, 375};

    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Price: %lf\n", book1.price);
    printf("pages: %d\n", book1.pages);

    return 0;
}
