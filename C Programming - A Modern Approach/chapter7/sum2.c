#include <stdio.h>

int main(void)
{
    long n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    scanf("%ld", &n);

    while (n != 0) {
        sum += n;
        printf("Enter integers (0 to terminate): ");
        scanf("%ld", &n);
    }

    printf("The sum of the integers is: %ld\n", sum);

    return 0;
}