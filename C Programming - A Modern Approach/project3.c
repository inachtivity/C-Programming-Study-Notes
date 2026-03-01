/*
* Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.
*/

#include <stdio.h>

#define PI 3.1415927f

int main(void)
{

    float sphereRadius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &sphereRadius);

    volume = (4.0f / 3.0f) * PI * (sphereRadius * sphereRadius * sphereRadius);

    printf("The volume of a sphere with a radius of 10 meters is: %.2f\n", volume);

    return 0;
}

