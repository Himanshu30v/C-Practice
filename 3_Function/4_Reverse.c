#include<stdio.h>

// display reverse order of number.
void ReverseOrder(int n) {

    while(n>0) {
        int lastdigit = n%10;
        printf("%d", lastdigit);
        n = n/10;
    }

    }
    


int main() {
    printf("Reverse Order:\n");
    ReverseOrder(12345);

    return 0;
}