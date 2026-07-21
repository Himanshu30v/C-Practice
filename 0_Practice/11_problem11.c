// Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        printf("%d", i);
        if (i < 10)
        {
            printf("+");
        }
        sum = sum + i;
        i++;
    }
    printf(" = %d", sum);

    return 0;
}