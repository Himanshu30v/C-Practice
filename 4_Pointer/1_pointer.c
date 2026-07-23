#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i
    int k = 67;

    //%p showing value in hexadecimal
    printf("The address of i is: %p\n", &i);
    printf("The address of i is: %p\n", j);
    printf("The address of i is: %p\n", &k);

    // %u showing value in decimal
    printf("The address of i is: %u\n", &i);
    printf("The address of i is: %u\n", j);
    printf("The address of i is: %u\n", &k);

    //  '*' for value and '&' for address
    printf("The value of address j is: %d", *(&i));

    return 0;
}