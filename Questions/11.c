// Write a function to find sum of digits of a number

#include <stdio.h>
int sum_two()
{
    float a, b, sum;

    printf("Enter your first number: ");
    scanf("%f", &a);
    printf("Enter your second number: ");
    scanf("%f", &b);

    sum = a + b;

    printf("Required sum is: %.2f\n", sum);
}

int main()
{
    sum_two();
    return 0;
}
