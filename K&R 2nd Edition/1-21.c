/*
* Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number
* of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When
* either a tab or a single blank would suffice to reach a tab stop, which should be given
* preference?
*/

#include <stdio.h>

#define MAX 1000
#define TABSTOP 8

int main(void) {

    int c, columnCount, consecSpaces;

    while ((c = getchar()) != EOF){

        if (c == ' ') {
            ++consecSpaces;

            if (columnCount % TABSTOP == 0){
                printf("\t");
                consecSpaces = 0;
            }
        }

        else if (c == '\n') {
            while (consecSpaces > 0){
                printf(" ");
                --consecSpaces;
                ++columnCount;
            }
            columnCount = 0;
            printf("\n");
        }

        else{
            while (consecSpaces > 0){
                printf(" ");
                --consecSpaces;
                ++columnCount;
            }
            putchar(c);
            consecSpaces = 0;
        }
        ++columnCount;
        
    }

    return 0;
}