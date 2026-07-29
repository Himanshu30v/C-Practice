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
    float percentage = sum/5;

    printf("Total marks obtained by the student out of 100 is: %d\n", sum);
    printf("Percentage is: %.2f\n", percentage);

    if (percentage >90)
    {
        printf("Pass with Grade 'A+'\n");
    }
    else if(percentage <= 90 && percentage >= 80) {
        printf("Pass with Grade 'A'\n");
    }
    else if(percentage < 80 && percentage >= 70) {
        printf("Pass with Grade 'B");
    }
    
    return 0;
}