// Programme to perint sum upto n no
// Programme to print factorial of n
// Progeamme to convert farhenhite into celcius
#include<stdio.h>
int sum(int n);
int factorial(int n);
float convttemp(float celsius);

int main(){
    // printf("Requires sum is: %d\n", sum(2)); 
    // printf("Required factorial of given no: %d\n", factorial(4));
    float celsius, far;
    printf("Give your temperature in Celsius: ");
    scanf("%f", &celsius); 
    
    far = convttemp(celsius); 
    printf("Required temperature in Fahrenheit is: %.2f\n", far);

    return 0;
}

int sum(int n){
    if (n == 1)
    {
        return 1;
    }
    
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
}

int factorial(int n){
    if (n == 1)
    {
        return 1;
    }
    int factNm1 = factorial(n-1) ; 
    int factn = n * factNm1;
    return factn;
}

float convttemp(float celsius){
    float far = (celsius * 9 / 5) + 32;
    return far;
}