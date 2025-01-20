// In an array of numbers, find how many times does a number 'x' occurs.

#include <stdio.h>
#include <stdlib.h> // For dynamic memory allocation (optional)

int main() {
    int n, x, count = 0;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Handle edge case where array size is 0
    if (n <= 0) {
        printf("Invalid array size. Exiting program.\n");
        return 1; // Exit with an error code
    }

    // Dynamically allocate memory for the array (optional)
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search
    printf("Enter the number to count (x): ");
    scanf("%d", &x);

    // Count occurrences of x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    // Print the result
    printf("The number %d occurs %d time(s) in the array.\n", x, count);

    // Free allocated memory
    free(arr);

    return 0;
}
