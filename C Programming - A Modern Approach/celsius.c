#include <stdio.h>

/*
*   Celsius to Fahrenheit
*/

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){

    float fahrenheit, celsius;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("%.0f fahrenheit in celsius is: %.0fC\n", fahrenheit, celsius);

    return 0;
}