// Write a program to print smallest number among two

#include<stdio.h>

int main(){
    float a,b;

    printf("Enter your first number: ");
    scanf("%f", &a);
    printf("Enter your second number: ");
    scanf("%f", &b);

    if(a < b){
        printf("The smallest number is: %.2f\n", a);
    } else {
        printf("The smallest number is: %.2f\n", b);
    }

    return 0;
}