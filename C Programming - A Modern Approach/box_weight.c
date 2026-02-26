#include <stdio.h>

/*
*  Chapter 2: Computing the Dimensional Weight of a Box
*
*/

#define FEEBASE 166

int main(void) {

    float height, length, width, volume, dimensionalWeight;
    height = 12.0;
    length = 10.0;
    width = 8.0;
    volume = height * length * width;
    dimensionalWeight = volume / FEEBASE;

    printf("Dimensions: %.0fx%.0fx%.0f\n", height, length, width);
    printf("Volume (cubic inches): %.0f\n", volume);
    printf("Dimensional Weight: %.0f\n", dimensionalWeight); // when printing a float, if decimal is set to 0, it will round up

    return 0;

}