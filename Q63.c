#include <stdio.h>

struct MyStruct
{
    char c1;
    int i;
    char c2;
};

int main()
{
    printf("Size of MyStruct: %d bytes\n", sizeof(struct MyStruct));
    return 0;
}