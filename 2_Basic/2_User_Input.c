// Write a C program to take two numbers from the user and print their sum, difference, multiplication, and division.

#include<stdio.h>
int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum is: %d\n", a+b);
    printf("Difference is: %d\n", a-b);
    printf("Multiply is: %d\n", a*b);
    printf("Division is: %d\n", a/b);

    return 0;
}