/*
*
* Modify the repdigit, c program of Section 8.1 so that it prints 
*
* a table showing how many times each digit appears in the number:
*
* Enter a number: 41271092
*
* Digit:          0 1 2 3 4 5 6 7 8 9
* Occurrences:    1 2 2 0 1 0 0 1 0 1
*
*/

#include <stdio.h>

int main(void) {

    int digit_rep[10] = {0};
    int digit;
    long num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    if (num == 0) {
        digit_rep[0] += 1;
    } else {
        while (num > 0) {
            digit = num % 10;
            digit_rep[digit] += 1;
            num /= 10;
        }
    }

    const int size_DR = sizeof(digit_rep) / sizeof(digit_rep[0]);

    printf("Digit:\t\t");
    for (int i = 0; i < size_DR; i++) {
        printf(" %d", i);
    }

    printf("\n");

    printf("Occurrences:\t");

    for (int i = 0; i < size_DR; i++) {
        printf(" %d", digit_rep[i]);
    }

    printf("\n");

    return 0;
}
