// Write a program to print numbers from N to 1.

#include<stdio.h>
int main() {
    int n;

    printf("Enter a number where u want to start print reverse order of the number: ");
    scanf("%d", &n);

    for(int i=n; i>=1; i--) {
        printf("%d\n", i);
    }

    return 0;
}