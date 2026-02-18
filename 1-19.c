/*
* Exercise1. Write a function reverse(s) that reverses the character string s. Use it to 
* write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAX 1000 

int myGetLine (char currLine[], int maxLength);
void reverseLine (char currLine[], char reversed[], int length);

int main (void) {

    int length = MAX;
    char currLine[MAX];
    char revLine[MAX];

    while ((length = myGetLine(currLine, MAX)) > 0) {
        reverseLine(currLine, revLine, length);
        printf("%s\n", revLine);
    }

    return 0;
}


int myGetLine (char currLine[], int maxLength) {

    int i, c;

    for (i = 0; i < maxLength - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        currLine[i] = c;
    }
    if (c == '\n') {
        currLine[i] = c;
        ++i;
    }
    currLine[i] = '\0';
    return i;
}

void reverseLine (char currLine[], char reversed[], int length) {

    int i, revLen;

    i = 0;
    revLen = length - 2;

    while ((reversed[i] = currLine[revLen]) != '\0') {
        ++i;
        --revLen;
    }

}

