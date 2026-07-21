// Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include <math.h>

int main()
{
    int a;

    printf("Enter side of a square: ");
    scanf("%d", &a);

    printf("Area of Square is: %.2f", pow(a, 2));

    return 0;
}