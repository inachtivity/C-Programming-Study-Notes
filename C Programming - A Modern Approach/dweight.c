#include <stdio.h>

/*
*  Chapter 2: Computing the Dimensional Weight of a Box
*
*/

#define INCHES_PER_POUND 166

int main(void) {

    float height, length, width, volume, dimensionalWeight;

    printf("Enter the Height of the Package: ");
    scanf("%f", &height);
    printf("Enter the Length of the Package: ");
    scanf("%f", &length);
    printf("Enter the Width of the Package: ");
    scanf("%f", &width);

    volume = height * length * width;
    dimensionalWeight = volume / INCHES_PER_POUND;

    printf("Dimensions: %.0fx%.0fx%.0f\n", height, length, width);
    printf("Volume (cubic inches): %.0f\n", volume);
    printf("Dimensional Weight: %.0f\n", dimensionalWeight); // when printing a float, if decimal is set to 0, it will round up

    return 0;

}