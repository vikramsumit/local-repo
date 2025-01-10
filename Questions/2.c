// Take the input of a number from user and give its square and cube as its output

#include<stdio.h>

int main(){
    float a,Square,Cube;
    
    //Take input of a no
    printf("Enter your Number: ");
    scanf("%f" , &a);

    // processing
    Square = a * a;
    Cube = a * a * a;

    //Printing of final solutions
    // printf("Square of number is : %.2f\n", Square);
    // printf("Cube of number is : %.2f\n", Cube);
    printf("Square of the number %.0f is: %.2f\n", a, Square);
    printf("Cube of the number %.0f is: %.2f\n", a, Cube);
}