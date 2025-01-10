// Program to chk if a no is divisible by two or not
// program to check if a number is odd or even
#include <stdio.h>

int main()
{
    // int num;
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // if (num % 2 == 0)
    //     printf("%d is divisible by 2 and it is even number.\n", num);
    // else
    //     printf("%d is not divisible by 2 and it is odd number.\n", num);

    // int itssunday = 1;
    // int itssnowing = 1;
    // printf("%d\n", itssunday && itssnowing);

    // int itsmonday = 1;
    // int itsraining = 1;
    // printf("%d\n", itsmonday && itsraining);

    int x;
    printf("Enter the number:");
    scanf("%d", &x);
    if (x >= 9 && x <= 100)
        printf("The number is between 9 and 100.\n");
    else
        printf("The number is not between 9 and 100.\n");
    return 0;
}