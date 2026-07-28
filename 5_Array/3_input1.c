#include<stdio.h>

int main() {
    int marks[5];
    
    printf("Enter marks of Hindi: ");
    scanf("%d", &marks[0]);

    printf("Enter marks of English: ");
    scanf("%d", &marks[1]);

    printf("Enter marks of Maths: ");
    scanf("%d", &marks[2]);

    printf("Enter marks of Physics: ");
    scanf("%d", &marks[3]);

    printf("Enter marks of Chemistry: ");
    scanf("%d", &marks[4]);

    int sum = marks[0] + marks[1]  + marks[2] + marks[3] +marks[4];

    

    return 0;
}