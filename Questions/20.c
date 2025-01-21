// In an array of numbers, find how many times does a number 'x' occurs.

#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation (optional)

int main()
{
    int n, x, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size. Exiting program.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count (x): ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    printf("The number %d occurs %d time(s) in the array.\n", x, count);

    free(arr);

    return 0;
}
