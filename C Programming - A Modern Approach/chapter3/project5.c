/*
* Write a program that asks the user to enter the numbers from I to 16 (in any order) and then displays the numbers in a 4 by 4 arrangement, 
* followed by the sums of the rows, columns, and diagonals:
*
* Enter the numbers from 1 to 16 in any order:
* 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
*
* 16 3 2 13
* 5 10 11 8
* 9 6 7 12
* 4 15 14 1
*
* Row sums: 34 34 34 34 
* Column sums: 34 34 34 34 
* Diagonal sums: 34 34
*/

#include <stdio.h>

int main(void)
{

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);

    printf("\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
    
    /*
    * a b c d
    * e f g h
    * i j k l 
    * m n o p
    */

    printf("Row sums: %d %d %d %d\n", a + b + d + c, e + f + g + h, i + j + k + l, m + n + o + p);
    printf("Column sums: %d %d %d %d\n", a + e + i + m, b + f + j + n, c + g + k + o, d + h + l +p);
    printf("Diagonal sums: %d %d\n", a + f + k + p, d + g + j + m);

    return 0;
}