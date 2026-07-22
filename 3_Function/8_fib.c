// Write a program using recursion to calculate nth element of fibonacci series.

#include<stdio.h>

int fib(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series of %d element: %d ", n, fib(n));
    

    return 0;
}

int fib(int n) {
    if(n==1 || n==2) {
        return n-1;
    }
    return fib(n-1) + fib(n-2);
} 