// Area of circle

#include <stdio.h>

int main(){
    float Radius;
    float pi = 3.14;

    printf("Enter the Radius of circle: ");
    scanf("%f", &Radius);

    printf("Required area of circle is %.2f", pi * Radius * Radius);
    return 0;
}

/*float pi = 3.14159;
printf("Value of pi: %f", pi);
Value of pi: 3.141590

float pi = 3.14159;
printf("Value of pi: %.2f", pi);
Value of pi: 3.14
/*