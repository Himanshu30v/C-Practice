// Write a function that returns the maximum of three numbers.

#include<stdio.h>


// Display maximum number b/w three numbers.
int findmax(int a, int b, int c) {
    if(a >= b && a >= c) {
        return a;
    }

    else if(b >= c && b >= a) {
        return b;
   
    }
    else 
        return c;
    
}

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    findmax(a, b, c);
    printf("%d is largest number.", findmax(a, b, c));
    

    return 0;
}