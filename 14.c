// Program to calculate area of square, circle and rectangle

#include<stdio.h>

float arofsquare();
float arofcircle();
float arofrectangle();

int main(){
    float area;

    area = arofsquare();
    printf("Area of square = %.2f\n", area);

    area = arofcircle();
    printf("Area of circle = %.2f\n", area);

    area = arofrectangle();
    printf("Area of rectangle = %.2f\n", area);
    return 0;
}

float arofsquare() {
    float side;
    printf("Enter the side of square: ");
    scanf("%f", &side);
    return side * side;
    
    }

float arofcircle(){
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f", &r);
    return  3.14 * r * r;
}

float arofrectangle(){
    float l,b;
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    return l * b;
    }