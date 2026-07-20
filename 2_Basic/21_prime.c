// Write a program to check whether a number is prime or not.

#include <stdio.h>
int main()
{
    int n, prime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("%d is not a prime number.", n);
    }

    else
    {
        for (int i = 2; i < n; i++)
        {

            if (n % i == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 0)
        {
            printf("%d is a prime number.", n);
        }
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}