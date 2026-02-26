#include <stdio.h>

/*
*  Chapter 2: Computing the Dimensional Weight of a Box
*
*/

#define FEEBASE 166

int main(void) {

    float height, length, width, volume;
    height = 12.0;
    length = 10.0;
    width = 8.0;
    volume = (height * length * width) / FEEBASE;

    printf("Volume is: %.0f\n", volume); // when printing a float, if decimal is set to 0, it will round up

    return 0;

}