/*
Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("Enter your income(in LPA): ");
    scanf("%f", &income);

    if (income <= 2.5)
    {
        tax = 0;
    }
    else if (income <= 5)
    {
        tax = (income - 2.5) * 0.05;
    }
    else if (income <= 10)
    {
        tax = (2.5 * 0.05) + (income - 5) * 0.2;
    }
    else
    {
        tax = (2.5 * 0.05) + (5 * 0.2) + (income - 10) * 0.3;
    }

    printf("Your income is: %.2f\n", income);
    printf("You have to pay %.2f ammount as tax.", tax);

    return 0;
}