/*

    Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.

*/

#include <stdio.h>

#define MAX_CHAR 128

int main(void) {

    int c;
    int arr[MAX_CHAR] = { 0 };

    while ((c = getchar()) != EOF) {
        ++arr[c];
    }
    
    for (int i = 0; i < MAX_CHAR; i++) {
        if (arr[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < arr[i]; ++j) {
                printf("*");
            }
            printf("\n");
        }

    }

}