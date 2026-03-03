/*
* Write a program that calculates the remaining balance on a loan after the first, second, and third monthly payments:
*
* Enter amount of loan: 20000.00 
* Enter interest rate: 6.0 
* Enter monthly payment: 386.66
*
* Balance remaining after first payment: $19713.34 
* Balance remaining after second payment: $19425.25 
* Balance remaining after third payment: $19135.71
*/

#include <stdio.h>

int main(void)
{
    float loanAmount, interestRate, monthlyPayment, balance, withInterest;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);


    balance = (loanAmount - monthlyPayment) + ((loanAmount * (interestRate / 12.00f)) / 100.00f);
    printf("Balance remaining after first payment: %.2f\n", balance);

    balance = (balance - monthlyPayment) + ((balance * (interestRate / 12.00f)) / 100.00f);
    printf("Balance remaining after 2nd payment: %.2f\n", balance);

    balance = (balance - monthlyPayment) + ((balance * (interestRate / 12.00f)) / 100.00f);
    printf("Balance remaining after 3rd payment: %.2f\n", balance);

    return 0;
}