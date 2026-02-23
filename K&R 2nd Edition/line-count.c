#include <stdio.h>


int main(void){


    int numLine, curr, prev;

    numLine = 0;
    prev = '\0';

    // currs blanks, tabs, newlines
    // while( (curr = getchar()) != EOF ){
    //     if ( curr == '\n' || curr == ' ' || curr == '\t' ){
    //         ++numLine;
    //     }
    //     printf("%d\n", numLine);
    // }

    // copies the input to its output, replaces each string or one or more blanks by a single blank
    // while( (curr = getchar()) != EOF ){

    //     if (curr == ' ' && prev == ' '  ){
    //         continue; // skips this iteration
    //     }

    //     putchar(curr);
    //     prev = curr;
    // }

    // copies the input to its output, replaces the tab with "/t", the backspace with "/b", the \ with '\\'
    while ( (curr = getchar()) != EOF ){

        if (curr == '\t') {
            curr = '\0';
            printf("\\t");
        }

        if (curr == '\b') {
            curr = '\0';
            printf("\\b");
        }

        if (curr == '\\') {
            curr = '\0';
            printf("\\\\");
        }

        else{
            putchar(curr);
        }
    }

}
