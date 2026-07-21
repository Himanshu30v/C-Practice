// Write a program to find greatest of four numbers entered by the user

#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && a >= c && a >= d)
    {
        printf("%d is largest number.", a);
    }
    else if (b >= c && b >= d && b >= a)
    {
        printf("%d is largest number.", b);
    }
    else if (c >= d && c >= a && c >= b)
    {
        printf("%d is largest number.", c);
    }
    else
    {
        printf("%d is largest number.", d);
    }
    return 0;
}