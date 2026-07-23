#include<stdio.h>

int main() {
    int i = 72;
    int* j = &i;  // j is a pointer pointing to i
    int k = 67;


    //%p showing value in hexadecimal
    printf("The addres of i is: %p\n", &i);
    printf("The addres of i is: %p\n", j);
    printf("The addres of i is: %p\n", &k);

    // %u showing value in decimal 
    printf("The addres of i is: %u\n", &i);
    printf("The addres of i is: %u\n", j);
    printf("The addres of i is: %u\n", &k);

    return 0;
}