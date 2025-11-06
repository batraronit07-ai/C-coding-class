#include <stdio.h>
#include <string.h>

typedef struct students
{
    char name[50];
    char branch[50];
    int ID_number;
} stu;

int main()
{
    stu s;
    strcpy(s.name, "Geeks");
    strcpy(s.branch, "CSE");
    s.ID_number = 108;

    printf("%s\n", s.name);
    printf("%s\n", s.branch);
    printf("%d", s.ID_number);
    return 0;
}