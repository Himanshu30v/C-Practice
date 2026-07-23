#include<stdio.h>

int main() {
    
    char i = 'A';
    char* j= &i;

    float m = 5.6;
    float* n = &m;

    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %p\n", j);

    printf("The address of i is: %p\n", &m);
    printf("The address of i is: %p\n", n);

    
    return 0;
}