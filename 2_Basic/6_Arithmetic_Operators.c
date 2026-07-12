// Write a C program to perform all arithmetic operations on two numbers.

#include<stdio.h>
int main() {

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum is: %d\n", a+b);
    printf("Difference is: %d\n", a-b);
    printf("Multiply is: %d\n", a*b);
    printf("Division is: %d\n", a/b);
    printf("Modulus is: %d\n", a%b);
}