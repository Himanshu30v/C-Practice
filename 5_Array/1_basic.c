#include <stdio.h>

int main()
{
    int marks[10];  // reserve space to store 10 integers

    marks[0] = 90;
    marks[1] = 98;
    marks[2] = 89;
    //  We can go all the way till marks[9]

    printf("The marks of '0', '1' and '2' is %d, %d and %d", marks[0], marks[1], marks[2]);
    return 0;
}