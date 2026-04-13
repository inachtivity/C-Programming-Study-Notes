/*
* Programming Project 8 in Chapter 2 asked you to write a program that calculates the remaining balance on a loan 
* after the first, second, and third monthly payments. Modify the program so that it also asks the user to 
* enter the number of payments and then displays the balance remaining after each of these payments.
*/

#include <stdio.h>

int main(void)  
{
    float loanAmount, interestRate, monthlyPayment, balance;
    int num_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    printf("Enter the number of payment: ");
    scanf("%d", &num_payment);

    balance = (loanAmount - monthlyPayment) + ((loanAmount * (interestRate / 12.00f)) / 100.00f);

    while (num_payment > 0) {
        printf("Balance remaining after first payment: %.2f\n", balance);
        balance = (balance - monthlyPayment) + ((balance * (interestRate / 12.00f)) / 100.00f);
        --num_payment;
    }

    return 0;
}