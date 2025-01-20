// Write a program in C to print all the letters in english alphabet using a pointer.

#include <stdio.h>

int main() {
    char alphabet[26]; // Array to hold the English alphabet
    char *ptr = alphabet; // Pointer to the alphabet array

    // Fill the array with the English alphabet
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i; // Assign letters A to Z
    }

    printf("English Alphabet using a Pointer:\n");

    // Print the alphabet using the pointer
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i)); // Dereference the pointer to access the letter
    }

    printf("\n");
    return 0;
}
