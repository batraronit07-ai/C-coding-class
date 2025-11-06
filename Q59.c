#include <stdio.h>

struct Books
{
    char title[100];
    char author[200];
    double price;
    int pages;
};

void printbook(struct Books book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %lf\n", book.price);
    printf("pages: %d\n", book.pages);
}

int main()
{
    struct Books book1 = {"let uc C", "Yashwant kanetkar", 675.50, 675};
    struct Books book2 = {"Think and grow rich", "Napolean Hill", 450.50, 400};

    printbook(book1);
    printbook(book2);

    return 0;
}