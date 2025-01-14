// Write a function to find square root of a number

#include <stdio.h>
#include <math.h>

float find_square_root()
{
    float num, a;
printf("Enter the number to find square root: ");
    scanf("%f", &num);
    if (num < 0)
    {
        printf("Square root of negative number is not real\n");
    }
    else
    {
        a = sqrt(num);

        printf("Square root of number %.2f is: %.2f\n", num,a);
    }
}
int main()
{
    find_square_root();
    return 0;
}
