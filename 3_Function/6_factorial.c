#include <stdio.h>

int factorial(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: \n", n);
    printf("%d!: ", n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf("*");
        }
    }
    printf(" = %d", factorial(n));

    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return factorial(n - 1) * n;
}