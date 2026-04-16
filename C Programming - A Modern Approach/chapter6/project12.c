/*
*
* Modify Programming Project 11 so that the program continues adding terms 
* until the current term becomes less than e, 
* where e is a small (floating-point) number entered by the user.
*
*/

#include <stdio.h>

int main(void) 
{
    float epsilon_input, term = 1.0f, fact = 1.0f, e = 1.0f;
    int i; 

    printf("Enter the value of e: ");
    scanf("%f", &epsilon_input);
    

    for (i = 1; ;i++ ) {
        fact *= i;
        term = 1.0f / fact;

        if (term < epsilon_input) {
            break;
        }

        e += term;
    } 

    printf("e = %f\n", e);

    return 0;
}