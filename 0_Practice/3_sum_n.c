// Write a recursive function to calculate: sum of n numbers

#include<stdio.h>

void sum(int n) {
    if(n == 0) {
        return;
    }

    sum(n-1);
    printf("%d", n);
    if(n != n-1) {
        printf("+");
    }
    

}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum(n);

    return 0;
}