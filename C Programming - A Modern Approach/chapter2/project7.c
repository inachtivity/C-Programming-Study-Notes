/*
* Write a program that asks the user to enter a U.S. dollar amount and then 
* shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
*
* Enter a dollar amount: 93
* 
* $20 bills: 4 
* $10 bills: 1 
* $5 bills: 0 
* $1 bills: 3
*/

#include <stdio.h>

#define BILL20 20
#define BILL10 10
#define BILL5 5
#define BILL1 1

int main(void)
{
    int amount, bill20, bill10, bill5, bill1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    bill20 = amount / BILL20;
    amount = amount - (bill20 * BILL20);
    printf("$20 bills: %d\n", bill20);

    bill10 = amount / BILL10;
    amount = amount - (bill10 * BILL10);
    printf("$10 bills: %d\n", bill10);
    
    bill5 = amount / BILL5;
    amount = amount - (bill5 * BILL5);
    printf("$5 bills: %d\n", bill5);

    bill1 = amount / BILL1;
    amount = amount - (bill1 * BILL1);
    printf("$1 bills: %d\n", bill1);

    return 0;
}