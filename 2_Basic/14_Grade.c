// Write a program to calculate grade according to marks

#include<stdio.h>
int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(90<= marks && marks <=100) {
        printf("Grade A");
    }

    else if(75 <= marks && marks <=89) {
    printf("Grade B");
    }

    else if(60 <= marks && marks <= 74) {
    printf("Grade C");
    }

    else if(40 <= marks && marks <=59) {
    printf("Grade D");
    }

    else if(marks<40) {
    printf("Fail");
}
    else 
        printf("Enter valid marks!");
}