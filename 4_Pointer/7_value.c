// Write a program to print the address of a variable. Use this address to get the value of the variable.

#include<stdio.h>

int main() {
    int a = 63;
    int* b = &a;

    printf("The address of a(%d) is: %p\n", a, &a);
    printf("The value of variable (a) is: %d\n", *b);

    return 0;
}