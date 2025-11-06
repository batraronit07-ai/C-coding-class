#include <stdio.h>

int main()
{

    int var = 10;
    int *ptr = &var;

    printf("%d\n", *ptr);
    printf("%d\n", ptr);
    printf("%p\n", *ptr);
    printf("%u", *ptr);

    return 0;
}