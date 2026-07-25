// Write a program to change the value of a variable to ten times its current value

#include <stdio.h>
void tenTimes(int *i)
{
    *i = *i * 10;
}

int main()
{
    int i = 6;
    printf("The value of 'i' is: %d\n", i);

    tenTimes(&i);
    printf("The value of 10X 'i' is %d\n ", i);

    return 0;
}