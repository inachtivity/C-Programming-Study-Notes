/*
* Modify the repdigit.c program of Section 8.1 
* so that the user can enter more than one number to be tested for repeated digits. 
* The program should terminate when the user enters a number that’s less than or equal to 0.
*/


#include <stdio.h>
#include <stdbool.h>

int main (void) {
    
    bool digit_seen[10] = {false};
    int digit;
    long n = 1;
    long x;

    while (n > 0) {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n <= 0) {
            break;
        }

        x = n;
        
        while (x > 0){
            digit = x % 10;
                if (digit_seen[digit]) {
                    break;
                }
            digit_seen[digit] = true;
            x /= 10; 
        }


        if (x > 0) {
            printf("Repeated digits.\n");
        }
        else {
            printf("No repeated digits.\n");
        }

        for (int i = 0; i < 10; i++) {
            digit_seen[i] = false;
        }

    }
    
    return 0;
}