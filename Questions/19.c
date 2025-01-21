// Write a program in C to print all the letters in english alphabet using a pointer.

#include <stdio.h>

int main()
{
    char alphabet[26];
    char *ptr = alphabet;

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'A' + i;
    }

    printf("English Alphabet using a Pointer:\n");

    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *(ptr + i));
    }

    printf("\n");
    return 0;
}
