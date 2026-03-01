#include <stdio.h>

/*
*  Chapter 2: Computing the Dimensional Weight of a Box
*  Exercise - Section 2.4
*  Condense the dweight.c program by (1) replacing the assignments to height,
*  length, and width with initializers and (2) removing the weight variable, 
*  instead cal¬ culating (volume + 165) / 166 within the last printf.
*/

#define INCHES_PER_POUND 166

// int main(void) {

//     float height, length, width, volume, dimensionalWeight;

//     printf("Enter the Height of the Package: ");
//     scanf("%f", &height);
//     printf("Enter the Length of the Package: ");
//     scanf("%f", &length);
//     printf("Enter the Width of the Package: ");
//     scanf("%f", &width);

//     volume = height * length * width;
//     dimensionalWeight = volume / INCHES_PER_POUND;

//     printf("Dimensions: %.0fx%.0fx%.0f\n", height, length, width);
//     printf("Volume (cubic inches): %.0f\n", volume);
//     printf("Dimensional Weight: %.0f\n", dimensionalWeight); // when printing a float, if decimal is set to 0, it will round up

//     return 0;

// }

// dweight.c - Exercise Section 2-4
int main(void)
{

    float height = 8.0f, length = 12.0f, width = 10.0f;

    printf("Dimensions: %.0fx%.0fx%.0f\n", height, length, width);
    printf("Volume (cubic inches): %.0f\n", height * length * width);
    printf("Dimensional Weight: %.0f\n", (height * length * width) / INCHES_PER_POUND);

    return 0;
}