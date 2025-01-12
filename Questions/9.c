// Write a program to check if a number is prime or not

#include<stdio.h>

int main(){
    int num, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num < 2){
        printf("%d is not a prime number.");
    }

    for(i = 2; i<num; i++){
        if(num % i == 0){
            printf("%d is a not prime number.");
            break;
        }else{
            printf("%d is a prime number.");
            break;
        }
    }

    return 0;
}