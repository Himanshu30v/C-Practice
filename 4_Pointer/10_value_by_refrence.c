// Write a function and pass the value by reference.

#include<stdio.h>

void valueByReference(int* n) {
    *n = 6;
    
}
int main() {
    int n;
    
    valueByReference(&n);
    printf("The value is: %d\n", n);
    
    return 0;
}