#include <stdio.h>

int main()
{
    int marks[10];  // reserve space to store 10 integers

    marks[0] = 90;
    marks[1] = 98;
    //  We can go all the way till marks[10]

    printf("The marks of '0' and '1' is %d and %d", marks[0], marks[1]);
    return 0;
}