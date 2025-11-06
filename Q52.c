#include <stdio.h>
int sum;
int fun(int n)
{
    if (n == 11)
    {
        return 0;
    }

    sum = sum + n;

    fun(n + 1);
}

int main()
{
    fun(1);
    printf("Sum of 1-10 is %d", sum);
    return 0;
}