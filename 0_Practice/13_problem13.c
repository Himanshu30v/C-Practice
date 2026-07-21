// Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is \n%d!: ", n, n);
    i = n;
    while (i >= 1)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf("*");
        }
        fact = fact * i;
        i--;
    }

    printf(" = %d", fact);
    return 0;
}