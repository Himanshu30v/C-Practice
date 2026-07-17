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

   int greater =  findmax(a, b, c);
    printf("%d is largest number.", greater);
    

    return 0;
}