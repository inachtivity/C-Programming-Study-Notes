// Modify the sum2 . c program of Section 7.1 to sum a series of double values.

#include <stdio.h>

int main(void)
{
    double n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter double value (0 to terminate): ");
    scanf("%lf", &n);

    while (n != 0.0) {
        sum += n;
        printf("Enter a double value (0 to terminate): ");
        scanf("%lf", &n);
    }

    printf("The sum of the integers is: %lf\n", sum);

    return 0;
}