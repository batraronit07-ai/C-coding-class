// WAP to calculate factorial of a number using recccursions

#include <stdio.h>

int factorial=1;
int fun(int n)
{
    if (n > 0)
    {
        factorial = factorial * n;
        fun(n - 1);
    }

    else
    {
        return 0;
    }
}

int main()
{

    int n;

    printf("enter n: ");
    scanf("%d", &n);

    fun(n);

    printf("factorial of %d is %d", n, factorial);

    return 0;
}