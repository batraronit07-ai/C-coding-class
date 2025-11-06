// WAP to store and display info of a student (Roll number, marks, name)

#include <stdio.h>

struct student
{
    char name[100];
    int roll_number;
    int marks;
};

int main()
{
    struct student std1 = {"Ronit Batra", 1, 475};

    printf("name: %s\n", std1.name);
    printf("roll_number: %d\n", std1.roll_number);
    printf("marks: %d\n", std1.marks);

    return 0;
}
