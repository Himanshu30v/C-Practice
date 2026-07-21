// Write a program to check whether a given number is prime or not using while loops

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
        int i = 2;
        while (i < n)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
            i++;
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