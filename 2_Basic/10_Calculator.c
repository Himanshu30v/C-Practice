// Create a calculator using switch case.

#include<stdio.h> 
int main() {
    int a, b;

    printf("Enter First number: ");
    scanf("%d", &a);

    printf("Enter Second number: ");
    scanf("%d", &b);

    char op;
    printf("Enter Operator: ");
    scanf(" %c", &op);

    switch(op) {
        case '+':{
            printf("Sum is: %d", a+b);
            break;
        }

        case '-':{
            printf("Difference is: %d", a-b);
            break;
        }
        case '*':{
            printf("Multiply is: %d", a*b);
            break;
        }
        case '/': {
            printf("Division is: %d", a/b);
            break;
        }
        case '%': {
            printf("Modulus is: %d", a%b);
            break;
    }
    default:
        printf("Enter a valid operator");
        break;
    
}
}