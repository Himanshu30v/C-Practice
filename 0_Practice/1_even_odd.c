// Write a function to check whether a number is even or odd.

#include<stdio.h>


// Display number is even or odd
void EvenOdd(int n) {

    if( n%2 == 0) {
        printf("%d is Even", n);
    }

    else 
        printf("%d is Odd", n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    EvenOdd(n);

    return 0;
}