/*
*
* Write a program that uses Newton's method to 
* compute the square root of a positive 
* floating-point number:
*
* Enter a positive number: 3 
* Square root: 1.73205
* 
* Let x be the number entered by the user. 
* Newton’s method requires an initial guess 
* y for the square root of x (we’ll use y = 1). 
* Successive guesses are found by computing the 
* average of y and x/y. 
* 
* Note that the values of y get progressively closer 
* to the true square root of x. For greater accuracy, 
* your program should use variables of type double 
* rather than float. Have the program terminate when 
* the absolute value of the difference between 
* the old value of y and the new value of y 
* is less than the product of .00001 and y. 
*
* Hint: Call the fabs function to find the absolute value of a double. 
* (You’ll need to include the <math.h> header 
* at the beginning of your program in order to use fabs.)
*
*/


#include <stdio.h>
#include <math.h>

int main(void) {


    double x, y = 1, old_y;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (;;) {
        old_y = y;
        y = (y + (x / y)) / 2;

        if ((fabs(old_y - y)) < (0.00001 * y)) {
            break;
        }
    }

    printf("Square root: %.5lf\n", y);

    return 0;
}