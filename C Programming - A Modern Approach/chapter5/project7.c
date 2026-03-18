/*
*
* Write a program that finds the largest and smallest of four integers entered by the user:
*
* Enter four integers: 21 43 10 35 Largest: 43 Smallest: 10
*
* Use as few if statements as possible. Hint: Four if statements are sufficient.
*
*/

#include <stdio.h>

int main(void)
{
    int val1, val2, val3, val4, max1, min1, max2, min2, max_fin, min_fin;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &val1, &val2, &val3, &val4);

    if (val1 >= val2) {
        max1 = val1;
        min1 = val2;
    } else {
        max1 = val2;
        min1 = val1;
    }

    if (val3 >= val4) {
        max2 = val3;
        min2 = val4; 
    } else {
        max2 = val4;
        min2 = val3;
    }

    if (max1 > max2) {
        max_fin = max1;
    } else {
        max_fin = max2;
    }
    
    if (min1 < min2) {
        min_fin = min1;
    } else {
        min_fin = min2;
    }
    
    printf("Largest number: %d\nSmallest number: %d\n", max_fin, min_fin);

    return 0;
}
