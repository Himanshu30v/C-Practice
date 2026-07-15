// Create a function that takes two numbers and prints their sum.

#include<stdio.h>

// Sum of two numbers.
int add(int a, int b) {

    return a+b;

}

// Difference b/w two numbers.

int subtract(int a, int b) {

    return a-b;
}

// Multiply b/w two numbers.

int multiply(int a, int b) {

    return a*b;
}

// Division b/w two numbers.

float division(int a, int b) {

    return (float)a/b;
}

// Square of a number

void square(int n) {

    printf("Square of %d is: %d\n", n, n*n);

}

// Display largest number between two number

int largest(int m, int n) {
    
    if(m>n) {
        return m;
    }
    else 
        return n;
}


int main() {

    int sum = add(10, 20);
    printf("Sum is: %d\n", sum);   

    int difference = subtract(10, 20);
    printf("Difference is: %d\n", difference);

    int product = multiply(10, 20);
    printf("Product is: %d\n", product);

    float div = division(10, 20);
    printf("Division is: %.2f\n", div);   

    square(5);
    
    int ans = largest(10, 25);
    printf("%d is a largest number.\n", ans);
    
    return 0;

}