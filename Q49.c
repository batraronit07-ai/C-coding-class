#include <stdio.h>

void updateValue(int *y)
{
    *y = *y + 10;
}

int main()
{
    int x = 50;

    printf("Before fucntion call : %d\n", x);

    updateValue(&x);

    printf("After function call : %d", x);

    return 0;
}