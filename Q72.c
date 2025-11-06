#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *p;
    int (*ptr)[5];
    p = arr;
    ptr = &arr;

    printf("p = %u\n", p);
    printf("ptr = %u\n\n", ptr);
    printf("*ptr[2] = %u\n\n", (*ptr)[2]);

    p++;
    ptr++;

    printf("p = %u\n", p);
    printf("ptr = %u\n\n", ptr);

    return 0;
}