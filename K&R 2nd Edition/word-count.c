#include <stdio.h>

#define IN 1
#define OUT 0

int main(void){
    
int c, countLine, countWord, countChar, state;

c = countLine = countWord = countChar = 0;

state = OUT;

while ((c = getchar()) != EOF ) {

    ++countChar;
    if (c == '\n') {
        ++countLine;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
        state = OUT;
    }
    else if (state == OUT) {
        state = IN;
        ++countWord;
    }

        printf("%d %d %d\n", countLine, countWord, countChar);
    }
    
}   



