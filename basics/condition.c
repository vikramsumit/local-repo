#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    // if(age>=18){
    //     printf("You are an adult.\n");
    //     printf("He/She is eligible for vote.\n");
    //     printf("He/She can drink and drive.\n");
    // }
    // else{
    //     printf("You are not an adult.\n");
    //     printf("You are not eligible for vote.\n");
    // }

    // Ternary Operator
    age >= 18 ? printf("You are an adult.\n") : printf("You are not an adult");

    // switch case
    int choice, a, b;

    printf("Select an operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice)
    {
    case 1:
        printf("Result of addition: %d\n", a + b);
        break;
    case 2:
        printf("Result of subtraction: %d\n", a - b);
        break;
    case 3:
        printf("Result of multiplication: %d\n", a * b);
        break;
    case 4:
        if (b != 0)
        {
            printf("Result of division: %.2f\n", (float)a / b);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice. Please select a number between 1 and 4.\n");
    }

    return 0;
}