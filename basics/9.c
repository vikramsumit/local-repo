// Program to chk child is pass or fail in any exam

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks of child: ");
    scanf("%d", &marks);
    // if (marks >= 33 && marks <= 100)
    // {
    //     printf("Student passed the exams\n");
    // }
    // else if (marks >= 0 && marks < 33)
    // {
    //     printf("Student failed the exams\n");
    // }
    // else
    // {
    //     printf("Invalid marks\n");
    // }

    (marks >= 0 && marks <= 100) ? (marks >= 33
               ? printf("Student passed the exams\n")
               : printf("Student failed the exams\n"))
        : printf("Invalid marks\n");
}