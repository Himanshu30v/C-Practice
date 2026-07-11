// 1. Write a C program to store and display your personal details using different data types.

#include<stdio.h>
int main() {
    int age;
    float height;
    char Grade;
    char name[10];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);    

    printf("Enter your Grade: ");
    scanf(" %c", &Grade);

    return 0;
}

