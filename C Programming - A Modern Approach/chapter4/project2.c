/*
* extend the project 1 to accept 3 digits
*/

#include <stdio.h>

int main(void)
{
    int x, first_digit, second_digit, third_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &x);

    first_digit = x / 100;
    second_digit = (x % 100) / 10;
    third_digit = x % 10;

    printf("The reversal is: %d%d%d", third_digit, second_digit, first_digit);

    return 0;
}