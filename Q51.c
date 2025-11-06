#include <stdio.h>

void modifyvalue(int *numptr)
{
    *numptr = *numptr + 10;
    printf("Inside function: *numptr = %d\n", *numptr);
}

int main()
{
    int x = 5;
    printf("Before fucntion call, x=%d\n", x);
    modifyvalue(&x);
    printf("After function call, x=%d", x);
    return 0;
}