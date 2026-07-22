// Write a program using function to find average of three numbers.

#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Average is: %.2f", average(a, b, c));

    return 0;
}

// Average of three numbers.
float average(int a, int b, int c)
{
    return (float)(a + b + c) / 3;
}