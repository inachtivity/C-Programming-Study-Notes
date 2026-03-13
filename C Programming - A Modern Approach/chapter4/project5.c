/*
*
* Rewrite the upc. c program of Section 4.1 so that the user enters 11 digits at one time, 
* instead of entering one digit, then five digits, and then another five digits.
*
* Enter the first 11 digits of a UPC: 01380015173 
* Check digit: 5
*
*/

#include <stdio.h>

int main(void)
{

    int item_type, man1, man2, man3, man4, man5, prod1, prod2, prod3, prod4, prod5, 
    first_sum, second_sum;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &item_type, &man1, &man2, &man3, &man4, &man5,
        &prod1, &prod2, &prod3, &prod4, &prod5);

    first_sum = item_type + man2 + man4 + prod1 + prod3 + prod5;

    second_sum = man1 + man3 + man5 + prod2 + prod4;

    printf("Check digit is: %d\n", 9 - ((((first_sum * 3) + second_sum) - 1) % 10));

    return 0;
}