#include <stdio.h>

int main()
{

    // Temperature conver celsius into fahrenheit.
    int celsius;

    printf("Enter Temperature in celsius: ");
    scanf("%d", &celsius);

    float fahrenheit = (1.8 * celsius) + 32;

    printf("Temperature in Fahrenheit is: %f", fahrenheit);

    return 0;
}