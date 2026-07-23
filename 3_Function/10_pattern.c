// Write a program using function to print the following pattern (first n lines)
/*
 *
 ***
 *****
 */

#include <stdio.h>

void pattern(int n);

int main()
{
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    pattern(n);

    return 0;
}

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
