// Write a progrm; to print natural number

#include <stdio.h>

int is_natural_number(int number) {
    return number > 0;
}

int main() {
    int num;

    printf("Enter a number to check if it is a natural number: ");
    scanf("%d", &num);

    if (is_natural_number(num)) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is not a natural number.\n", num);
    }

    return 0;
}

