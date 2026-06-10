/*
* Write a program that computes the factorial of a positive integer:
*
* Enter a positive integer: 6 
* Factorial of 6: 720
*
*/

#include <stdio.h>

int main(void){

    int x, f = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &x);

    printf("Factorial of %d: ", x);

    for (int i = 2; i <= x; i++) {
        f *= i;
    }

    printf("%d\n", f);

    return 0;
}