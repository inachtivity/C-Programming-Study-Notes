/*
* Write a program that computes the volume of a sphere with a 10-meter radius, 
* using the formula v = 4/3πr^3. Write the fraction 4/3 as 4 . Of /3 . Of. 
* (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, 
* so you'll need to multiply r by itself twice to compute r 3 .
*/

#include <stdio.h>

#define PI 3.1415927f

int main(void)
{

    float sphereRadius = 10.0f, volume;

    volume = (4.0f / 3.0f) * PI * (sphereRadius * sphereRadius * sphereRadius);

    printf("The volume of a sphere with a radius of 10 meters is: %.2f\n", volume);

    return 0;
}