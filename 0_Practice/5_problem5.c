/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
*/

#include <stdio.h>

int main()
{
    float income;

    printf("Enter your income(in LPA): ");
    scanf("%f", &income);

    if (income < 2.5)
    {
        printf("Tax Free!");
    }
    else if (income >= 2.5 && income <= 5)
    {
        printf("You have to pay 5%% tax of your income, To pay: %.2f ", income * 0.05);
    }
    else if (income > 5 && income <= 10)
    {
        printf("You have to pay 20%% tax of your income, To pay: %.2f", income * 0.2);
    }
    else if (income > 10)
    {
        printf("You have to pay 30%% tax of your income, To pay: %.2f", income * 0.3);
    }
    else
        printf("Enter valid income!");

    return 0;
}