// Write a C program to find factorial of a number.

#include<stdio.h>
int main() {
    int n, fact =1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d!= ", n);

    for(int i=n; i>=1; i--) {
        printf("%d", i);
        fact = fact*i;

        if(i ==n || i>1) {
            printf("*");
        }
    }
    printf(" = %d", fact);
}
