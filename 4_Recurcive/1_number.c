// Write a recursive function that prints: numbers from 1 to 5.

#include<stdio.h>

// void PrintNumber(int count);




void PrintNumber(int n) {
    
    if(n==6) {
        return;
    }
    
    printf("%d\n", n);
    PrintNumber(n+1);
    
}

int main() {
    PrintNumber(1);
    
    return 0;
}