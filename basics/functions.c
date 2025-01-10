#include <stdio.h>
// Declaration/Prototype to print functions
// void printHello();

void Namaste();
void Bonjour();

int main()
{
    // printHello();
    printf("Enter your Nationality: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'I')
    {
        Namaste();
    }
    else 
    {
        Bonjour();
    }
}

void Namaste()
{
    printf("Namaste Bro\n");
}

void Bonjour()
{
    printf("Bonjour\n");
}
// void printHello() {
//     printf("Hello, World!\n");

//     }