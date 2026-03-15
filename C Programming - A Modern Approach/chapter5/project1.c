/*
* Write a program that calculates how many digits a number contains:
* 
* Enter a number: 374
* The number 374 has 3 digits
*
* You may assume that the number has no more than four digits. Hint: Use if statements to test the number. 
* For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99. it has two digits.
*
*/

#include <stdio.h>

int main(void)
{
    int num, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num < 10) {
        digits = 1;
    }
    else if (num > 9 && num < 100) {
        digits = 2;
    }
    else if (num > 99 && num < 1000) {
        digits = 3;
    }
    else if (num >= 1000) {
        digits = 4;
    }

    printf("The number %d has %d digits.\n", num, digits);

    return 0;
}