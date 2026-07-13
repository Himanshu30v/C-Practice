// Write a program to check whether a person is eligible to vote.

#include<stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18) {
        printf("You are eligible for Voting");
    }
    else 
        printf("You are not eligible for voting.");
}