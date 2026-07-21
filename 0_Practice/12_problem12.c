// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.

#include <stdio.h>

int main()
{
    int n = 8;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, i * n);
        sum = sum + i * n;
    }
    printf("Sum of numbers occurring in table of 8 is: %d", sum);
    return 0;
}