// Write a program to print prime NUMBER in a range

#include <stdio.h>

int main()
{
    int a, b, i, j;

    printf("Enter your initial number:");
    scanf("%d", &a);
    printf("Enter your last number:");
    scanf("%d", &b);

    printf("Prime Number between %d and %d is: ", a, b);

    for (i = a; i <= b; i++)
    {

        if (i < 2)
        {
            break;
        }

        int is_prime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}