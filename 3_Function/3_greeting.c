/*
Write a program with three functions:
1. Good morning function which prints "good morning".
2. Good afternoon function which prints "good afternoon".
3. Good night function which prints "good night".
*/

#include <stdio.h>

void gm();
void ga();
void gn();

int main()
{

    gm();
    ga();
    gn();

    return 0;
}

//  Display Good Morning
void gm()
{
    printf("Good Morning!\n");  
}

//  Display Good Afternoon
void ga()
{
    printf("Good Afternoon!\n");
}

//  Display Good Night
void gn()
{
    printf("Good Night!\n");
}
