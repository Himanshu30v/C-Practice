// Write a program to find the largest number between two numbers.

#include<stdio.h>
int main() {

    int a, b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    int large = (a>b) ? a:b;

    printf("Largest Number is: %d", large);
    
}