// Write a program to print multiplication table of 10 in reversed order.

#include <stdio.h>

int main()
{
    int n = 10;
    printf("Reversed order table of 10 is: \n");

    for (int i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n", n, i, i * n);
    }
    return 0;
}