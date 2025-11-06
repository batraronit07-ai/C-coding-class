#include <stdio.h>

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr1 = &arr;
    int *ptr2 = &arr[0];
    printf("%d\n", ptr1);
    printf("%d\n", ptr2);
    return 0;
}