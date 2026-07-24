// Write a program having a variable i.Print the address of i  Pass this variable to a function and print its address. Are these addresses the same?

#include<stdio.h>

int address(int* i) {
    // int* j = &i;
    printf("The address of i is %u\n", address(6));
    
}
int main() {
    int i = 6;
    int* j = &i;

    printf("The address of i is: %u\n", &i);
    address(6);

    return 0;
}
