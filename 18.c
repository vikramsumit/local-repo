// pointer to pointer 
// Write a program to print sum,product & avg of two numbers. pt in main function
void dowork(int a, int b, int *sum,int *avg,int *prod);

#include <stdio.h>
int main(){
    // int i = 5;
    // int *ptr = &i;
    // int **pptr = &ptr;
     
    // printf("%d\n", **pptr); 
    int a = 3, b = 5;
    int sum,prod,avg;
    dowork(a, b, &sum, &avg, &prod);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod,avg);
    return 0;
}
void dowork(int a, int b, int *sum,int *prod,int *avg){
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2;
}
