// Write a program to insert an element at the end of an array.

#include <stdio.h>

int main()
{
    int n = 10;
    int arr[] = {2, 54, 24, 65, 234, 5467, 234, 657, 89, 44};
    int last; 

    printf("Given array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to insert at the end: ");
    scanf("%d", &last);

    arr[n] = last;

    printf("Array after insertion:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
