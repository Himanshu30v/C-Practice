// Write a function to check whether a number is Prime.

#include<stdio.h>

int isPrime(int n) {
    int isprime = 0;
    if(n) {
        return 0;
    }
    
    else {
        for(int i=2; i<n; i++) {
            
            if(n) {
                 isprime = 1;
                break;

                
            }
            
        }
        if(isprime ==0) {
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

    int result = isPrime(n);

    if(result) {
        return 1;
    }

    else return 0;

    return 0;
}