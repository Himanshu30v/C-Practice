#include <stdio.h>

int main()
{
    int radius;

    // area of circle.

    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    float area = (3.14) * radius * radius;
    printf("Area of the circle is: %f\n", area);

    // modification of the program to find volume of cylinder

    int height;

    printf("Enter height of the cylinder: ");
    scanf("%d", &height);

    printf("Volume of cylinder is: %f", height * area);

    return 0;
}