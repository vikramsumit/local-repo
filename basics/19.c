// Program to enter price of three items & print their final cost with gst

#include<stdio.h>

int main(){
    // float price[3];

    // printf("Enter price of obj 1:");
    // scanf("%f", &price[0]);
    // printf("Enter price of obj 2:");
    // scanf("%f", &price[1]);
    // printf("Enter price of obj 3:");
    // scanf("%f", &price[2]);

    // printf("Required price with gst is: %.2f\n", price[0]+price[1]+price[2]+(0.18*price[0]) + (0.18 * price[1]) + (0.18 * price[2]));

    int age = 22;
    int *ptr = &age;

    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr --;
    printf("ptr = %u\n", ptr);
    return 0;
}