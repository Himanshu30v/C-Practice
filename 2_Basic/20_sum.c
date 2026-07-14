// Write a program to find the sum of digits of a number

#include<stdio.h>
int main() {
    int n, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits: ");

    for(int i=1; i<=n; i++) {
        printf("%d", i);
        sum = sum+i;
        
        if(i<n) {
            printf("+");
        }
    }
    printf(" = %d", sum);
}