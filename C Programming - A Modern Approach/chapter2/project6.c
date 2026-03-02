/*
* Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
*
* ((((3x + 2)x - 5)x - 1)x + 7)x - 6
*/

#include <stdio.h>

int main(void)
{

    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("With X, the value of the given polynomial is: %d\n", 
        ((((3 * x + (2)) * x - 5) * x - 1) * x + 7) * x - 6); 

    return 0;
}
