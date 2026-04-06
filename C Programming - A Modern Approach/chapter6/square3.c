#include <stdio.h>

// prints a table of squares using an odd method

int main(void)
{
    int i, n, odd, square;


    printf("Enter number of entries in table; ");
    scanf("%d", &n);

    odd = 3;
    i = 1;

    for (square = 1; i <= n; odd += 2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }


    return 0;
}