/*
* Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated:
* 
* Enter a number: 939577 
* Repeated digit(s): 7 9
*
*/

#include <stdio.h>
#include <stdbool.h>
int main(void){


    int digit_seen[10] = {0};
    int digit;
    long num;
    bool repeat = false;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0) {
        digit = num % 10;
        digit_seen[digit] += 1;
        num /= 10;
    }

    printf("Repeated digit(s): ");

    for (int i = 0; i < 10; i++) {
        if (digit_seen[i] > 1) {
            repeat = true;
            printf("%d ", i);
        }
    }

    if (repeat == false) {
        printf("none");
    }

    printf("\n");

    return 0;
}