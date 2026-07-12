// Write a program to find the largest number among three numbers.

#include<stdio.h>
int main() {

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && b>c) {
        printf("%d is Greater", a);
    }
    else if(a<b && b>c) {
        printf("%d is Greater", b);
    }
    else 
        printf("%d is Greater", c);
        
    
}