// Program to chk character is of Uppercase or Lowercase

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase letter.", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter.", ch);
    }
    else
    {
        printf("%c is neither uppercase nor lowercase letter.", ch);
    }
    return 0;
}