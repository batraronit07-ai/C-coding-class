#include <stdio.h>

int main()
{

    int var = 10;
    int *ptr1 = &var;

    int **ptr2 = &ptr1;

    printf("Var = %d\n", var);
    printf("*ptr1 = %d\n", *ptr1);
    printf("**ptr2 = %d\n", **ptr2);

    return 0;
}