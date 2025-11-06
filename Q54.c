// WAP to count down from 5 to 1 using reccursions

#include<stdio.h>

int fun(int n)
{
    if (n>0)
    {
        printf("%d\n", n);
        fun(n-1);
    }

    else 
    {
        return 0;
    }

}

int main() {

    fun(5);
    return 0;
}