/*
* Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:
*
* Enter a fraction: 6/12 
* In lowest terms: 1/2
*
* Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and denominator. Then divide both the numerator and denominator by the GCD.
*
*/

#include <stdio.h>

int main(void)
{

    int num, denom, n, m, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    if (denom != 0) {
        n = num; m = denom;

        while (n != 0) {
            remainder = m % n;
            m = n;
            n = remainder;
        }
        
        num /= m;
        denom /= m;
        
        printf("In lowest terms: %d/%d\n", num, denom);

    } else {
        printf("please enter a valid fraction");
    }
 
    return 0;
}