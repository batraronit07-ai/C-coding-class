#include <stdio.h>

int main()
{
    int a = 22;
    int *p = &a;

    printf("p=%p\n", p);
    p++;
    printf("p++=%p\n", p);
    p--;
    printf("p++=%p\n", p);

    float b = 22.22;
    float *q = &b;

    printf("q=%p\n", q);
    q++;
    printf("q++=%p\n", q);
    q--;
    printf("q--=%p\n", q);

    char c = 'a';
    char *r = &c;

    printf("r=%p\n", r);
    c++;
    printf("r++=%p\n", r);
    c--;
    printf("r--=%p\n", r);

    return 0;
}