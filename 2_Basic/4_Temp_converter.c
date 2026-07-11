#include<stdio.h>
int main() {
    float celsius;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;

    printf("Temperature in Fahrenheit: %f", fahrenheit);

    return 0;
}