/*
#include <stdio.h>
#include<string.h>

union Student
{
    int roll_no;
    float height;
    char name[100];
};

int main()
{
    union Student data;

    data.roll_no = 5;
    printf("%d\n", data.roll_no);

    data.height = 5.8;
    printf("%.2f\n", data.height);

    strcpy(data.name, 'Ronit');
    printf("%s", data.name);

    return 0;
}
*/

#include <stdio.h>
#include <string.h>

union Student
{
    int roll_no;
    float height;
    char name[20];
};

int main()
{
    union Student data;

    data.roll_no = 5;
    printf("Roll No: %d\n", data.roll_no);

    data.height = 5.8;
    printf("Height: %.2f\n", data.height);

    strcpy(data.name, "Ronit");
    printf("Name: %s\n", data.name);

    return 0;
}
