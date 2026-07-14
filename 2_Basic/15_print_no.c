// Write a program to print numbers from 1 to N using a for loop.

#include<stdio.h>
int main() {
    int n;
    
    printf("Enter the last number, you want to print number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}