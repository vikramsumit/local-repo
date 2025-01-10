//pointer to pointer
#include<stdio.h>

int main(){
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    // pointer to pointer
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;


    return 0;
}