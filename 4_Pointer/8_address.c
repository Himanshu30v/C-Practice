// Write a program having a variable i.Print the address of i  Pass this variable to a function and print its address. Are these addresses the same?

#include<stdio.h>

int address(int* j) {

    printf("The address of i is: %d\n", j);

    return 0;
    
    
}
int main() {
    int i = 6;
    int* j = &i;

    printf("The address of i is: %u\n", &i);
    address(j);

    return 0;
}
