//  Write a program to check if a given number is Armstrong number or not.

#include <stdio.h>
#include <math.h>

int is_armstrong(int number) {
    int original_number = number;
    int sum = 0, digit, num_digits = 0;

    int temp = number;
    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }

    temp = number;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    return sum == original_number;
}

int main() {
    int num;

    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &num);

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
