// Write a program to determine whether a character entered by the user is lowercase or not.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a UPPERCASE letter.", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase letter.", ch);
    }
    else
    {
        printf("Enter a valid character!", ch);
    }
    return 0;
}
