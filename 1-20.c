#include <stdio.h>

/* <In progress>
* Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
* of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
* Should n be a variable or a symbolic parameter
*/

#define MAX 1000
#define TABSTOP 5

int main(void) {

    int c, count, replaceBlank, tabStop;

    count = 0;
    tabStop = TABSTOP;

    while ((c = getchar()) != EOF){
       
        if (c == '\t') {
            replaceBlank = (tabStop - (count % tabStop));
            while (replaceBlank > 0) {
                c = '_';
                --replaceBlank;
                putchar(c);
                ++count;
            }
        } 
        else if (c == '\n') {
            count = 0;
            printf("\n");
            
        }
        else {
            ++count;
            putchar(c);
            
        }
        
    }


    return 0;
}
