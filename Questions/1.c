// Write a program to calculate perimeter of rectangle.
// Takes sides a and b from the user

#include <stdio.h>

int main(){
    float a, b, perimeter;

    printf("Enter length of rectangle:");
    scanf("%f", &a);
    printf("Enter breadth of rectangle:");
    scanf("%f", &b);

    perimeter = 2* (a +b);
    printf("Required perimeter of your given rectangle is : %.2f\n",perimeter);

    return 0;
}