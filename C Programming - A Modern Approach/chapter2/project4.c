/*
* Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
*
* Enter an amount: 100.00 With tax added: $105.00
*/

#include <stdio.h>

#define TAX 0.05f

int main(void)
{

    float amount;

    printf("Enter a dollar and cents amount: ");
    scanf("%f", &amount);

    printf("With 5%% tax added: %.2f\n", (amount * TAX) + amount);

    return 0;
}