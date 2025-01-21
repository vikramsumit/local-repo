// Write a program to print largest number in an array

#include <stdio.h>

int largest_num_array()
{
    int arr[] = {352, 22, 3, 214, 2432, 24, 24, 45, 324, 3452};

    int largest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
}
int main()
{
    printf("The largest number in the array is: %d\n", largest_num_array());
    return 0;
}