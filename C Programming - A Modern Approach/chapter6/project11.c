/*
* The value of the mathematical constant e can be expressed as an infinite series: 
* e= 1 + 1/1! + 1/2! +1/3! + ...
*
* Write a program that approximates e by computing die value of 
* 1 + 1/1!+ 1/21 + 1/3! + ... + 1/n! 
* where n is an integer entered by the user
*/

#include <stdio.h>

int main (void)
{

    int n, i;
    float e = 1.0f;
    float fact = 1.0f;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
        e += 1.0f / fact;
    }

    printf("e = %f\n", e);

    return 0;
}