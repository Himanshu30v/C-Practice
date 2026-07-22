// Write a recursive function to calculate the sum of first n natural number

#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Enter a NATURAL NUMBER.");
    }
    else
    {
        printf("Sum of first %d natural number is:\n", n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d", i);
            if (i < n)
            {
                printf("+");
            }
        }
        printf(" = %d\n", sum(n));
    }

    return 0;
}

int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}