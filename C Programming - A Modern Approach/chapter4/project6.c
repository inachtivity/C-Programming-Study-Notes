/*
* European countries use a 13-digit code, known as a European Article Number (EAN) 
* instead of the 12-digit Universal Product Code (UPC) found in North America. 
* Each EAN ends with a check digit, just as a UPC does. 
* The technique for calculating the check digit is also similar:
*
* Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
* Add the first, third, fifth, seventh, ninth, and eleventh digits.
* Multiply the first sum by 3 and add it to the second sum.
* Subtract 1 from the total.
* Compute the remainder when the adjusted total is divided by 10.
* Subtract the remainder from 9
* Enter the first 12 digits of an EAN: 869148426000 
* Check digit: 8
*
*/

#include <stdio.h>

int main(void)
{

    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_sum, second_sum, total, check_digit;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5,
        &d6, &d7, &d8, &d9, &d10, &d11, &d12);

    
    first_sum = d2 + d4 +d6 +d8 + d10 + d12;
    second_sum = d1 + d3 + d5 + d7 + d9 + d11;
    total = (first_sum * 3) + second_sum;
    check_digit = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", check_digit);

    return 0;
}