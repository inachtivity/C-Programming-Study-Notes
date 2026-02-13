#include <stdio.h>

// prints the input one word per line

#define IN 1
#define OUT 0

int main(){

    int c, state;

    c = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {

        if ( c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            printf("\n");
        }

        putchar(c);
    }
    return 0;
}