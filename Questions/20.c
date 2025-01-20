// In an array of numbers, find how many times does a number 'x' occurs.

#include <stdio.h>

int main() {
    int n, x, count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

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

    return 0;
}
