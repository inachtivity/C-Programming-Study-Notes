#include <stdio.h>

/*
* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the
* length of arbitrary long input lines, and as much as possible of the text
*/

#define MAXLINE 5

int getLine(char line[], int maxLine);
void copy(char to[], char from[]);

int main() {

    int len;
    int max;
    char currLine[MAXLINE];
    char longestLine[MAXLINE];

    max = 0;

    while ((len = getLine(currLine, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longestLine, currLine);
        }
    }
    
    if (max > 0) {
        printf("%s\n", longestLine);
        printf("%d", max);
    }
    return 0;
}

int getLine (char s[], int lim) {
    int c, i, len;

    i = len = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        
        ++len;
        
        if (i < lim - 1) {
            s[i] = c;
            ++i;
        }
    }
    if (c == '\n' && i < lim - 1) {
        s[i] = c;
        ++i;            
    }
    s[i] = '\0';
    return len; 
}

void copy (char to[], char from[]) {
    int i;

    i = 0;
    
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

