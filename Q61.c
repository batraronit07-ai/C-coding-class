// WAP to store and display info of multiple students (Roll number, marks, name)

// #include <stdio.h>

// struct student
// {
//     int roll_number;
//     int marks;
//     char name[50];
// };

// void information(struct student std1)
// {
//     printf("Name: %s\n", std1.name);
//     printf("roll number: %d\n", std1.roll_number);
//     printf("marks: %d\n", std1.marks);
// }

// int main()
// {
//     int n;
//     int roll_number;
//     int marks;
//     char name[50];

//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     struct student std[100];

//     printf("Enter information: ");

//     for (int i = 0; i = n; i++)
//     {
//         printf("Enter the name of the student: ");
//         scanf("%s", &std[i].name);

//         printf("Enter the roll number of the student: ");
//         scanf("%d", &std[i].roll_number);

//         printf("Enter the marks of the student: ");
//         scanf("%d", &std[i].marks);
//     }

//     printf("\nDisplaying information:\n");
//     for (int i = 0; i = n; i++)
//     {
//         information(std[i]);
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

struct student
{
    int roll_number;
    int marks;
    char name[50];
};

void information(struct student std1)
{
    printf("Name: %s\n", std1.name);
    printf("Roll number: %d\n", std1.roll_number);
    printf("Marks: %d\n", std1.marks);
}

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student std[n];

    printf("Enter information:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the student: ");
        scanf("%s", std[i].name);

        printf("Enter the roll number of the student: ");
        scanf("%d", &std[i].roll_number);

        printf("Enter the marks of the student: ");
        scanf("%d", &std[i].marks);
    }

    printf("\nDisplaying information:\n");
    for (int i = 0; i < n; i++)
    {
        information(std[i]);
        printf("\n");
    }

    return 0;
}