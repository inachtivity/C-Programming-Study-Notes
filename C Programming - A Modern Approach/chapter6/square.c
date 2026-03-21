/*
* a program that prints a table of squares
*/

#include <stdio.h>

int main(void)
{

    int n, i = 1;

    printf("This programp prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d\t%d\n", i, i * i);
        i++;
    }

    return 0;
}