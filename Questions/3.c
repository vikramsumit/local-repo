// Write a program to print avg of 3 numbers

# include<stdio.h>

int main(){
    float a,b,c,avg;

    printf("Enter your three numbers: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    avg = (a + b + c)/3;

    printf("Average is : %.2f\n", avg);

    return 0;
}