#include<stdio.h>

// factorial of a number.
int factorial(int n) {
    int fact = 1;

    printf("Factorial of %d:\n", n);
    printf("%d!: ", n);

    for(int i=n; i>=1; i--) {
        fact = fact*i;
        printf("%d", i);

        if(i>1){
            printf("*");
        }
    }
    printf("= %d", fact);
}


int main() {
    
    factorial(5);

    return 0;
}