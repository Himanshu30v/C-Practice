#include <stdio.h>

int main()
{

    // Code by hard inputs.

    int a = 5, b = 10;

    printf("Area of Rectangle is: %d\n", a * b);

    // by user inputs.

    int m, n;
    printf("Enter length and breadth of the rectangle:");
    scanf("%d %d", &m, &n);

    printf("Area of Rectangle is: %d", m * n);

    return 0;
}
