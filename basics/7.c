//Program to print avg of 5 numbers

#include<stdio.h>

int main(){
    int num1, num2, num3, num4, num5;
    float avg;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    avg = (num1 + num2 + num3 + num4 + num5) /5;
    printf("Average = %.2f", avg);
    return 0;
}