// Write a function to check whether a number is Prime.

#include<stdio.h>

int isPrime(int n) {
    int prime = 0;
    if(n<=1) {
        printf("%d is not a prime number.", n);
    }
    
    else {
        for(int i=2; i<n; i++) {
            
            if(n%i==0) {
                 prime = 1;
                break;

                
            }
            
        }
        if(prime ==0) {
            return 1;
        }
        else 
            return 0;
    }
   
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    isPrime(n);

    return 0;
}