/*
* Modify Programming Project 6 from Chapter 3 so that the user may 
* add, subtract, multiply, or divide two fractions 
* (by entering either +,-.*, or / between the fractions).
*/

#include <stdio.h>

int main(void)
{

    int num1, denom1, num2, denom2;
    char op;

    printf("Enter two fractions separated by an operation sign (+, -, *, /): ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

    if (op == '+') {
        printf("The sum is: %d/%d\n", (num1 * denom2) + (num2 * denom1), denom1 * denom2);
    }
    else if (op == '-' ) {
        printf("The difference is: %d/%d\n", (num1 * denom2) - (num2 * denom1), denom1 * denom2);
    }
    else if (op == '*') {
        printf("The product is: %d/%d\n", num1 * num2, denom1 * denom2);    
    }
    else if (op == '/') {
        printf("The quotient is: %d/%d\n", num1 * denom2, num2 * denom1);
    }
    else {
        printf("invalid operation\n");
    }

    return 0;
}