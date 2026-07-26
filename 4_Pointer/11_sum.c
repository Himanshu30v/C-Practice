// Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main()

#include <stdio.h>

int* sum(int m, int n);
float* avg(int m, int n);

int main()
{
    int m, n;
    int* ptr1;
    float* ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    ptr1 = sum(m, n);
    ptr2 = avg(m, n);

    printf("The address of sum is %u\n", ptr1);
    printf("The address of average is %u\n", ptr2);

    return 0;
}

int* sum(int m, int n)
{
    int sum = m + n;
    int* ptr1 = &sum;

    printf("The sum is: %d\n", sum);
    return ptr1;
}

float* avg(int m, int n)
{

    float avg = (m + n) / 2.0;
    float* ptr2 = &avg;

    printf("The average is: %.2f\n", avg);

    return ptr2;
}