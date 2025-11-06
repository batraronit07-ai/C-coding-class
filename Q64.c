#include <stdio.h>

union MyUnion
{
    int x;
    char y;
    int z;
};

int main()
{
    union MyUnion u;
    printf("Size of MyUnion: %d\n", sizeof(union MyUnion));

    u.x = 25;
    printf("Value of x = %d\n", u.x);

    u.y = 'a';
    printf("Value of y = %c\n", u.y);

    u.z = 5;
    printf("Value of z = %d\n", u.z);

    return 0;
}