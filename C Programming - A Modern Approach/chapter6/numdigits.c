/*
* a program that calculates the number of digits in an integer entered by the user.
*
*/

#include <stdio.h>

int main(void)
{
    int num, digit = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    do {
        num /= 10;
        ++digit;
    } while (num > 0);

    printf("The number has %d digits\n", digit);

    return 0;
}