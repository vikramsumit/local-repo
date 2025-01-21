// Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>

int main(){
    int a = 75;
    int *ptra = &a;
    int _a = *ptra;

    int b = 656;
    int *ptrb = &b;
    int _b = *ptrb;

    // printf("%d\n", &a);
    // printf("%d\n", *ptra);
    // printf("%d\n", &_a);

    if(*ptra > *ptrb){
        // printf("%d is greater than %d", &a,&b);
        printf("%d is greater than %d", *ptra,*ptrb);
    }else{
        // printf("%d is greater than %d", &b,&a);
        printf("%d is greater than %d", *ptrb,*ptra);
    }

    return 0;
}
