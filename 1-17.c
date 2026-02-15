#include <stdio.h>

/*

    Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.

*/

#define MAX 1000
#define MIN 80

int countLine(char currLine[], int maxLine);

int main(void) {

    int len;
    char currLine[MAX];
    
    while ((len = countLine(currLine, MAX)) > 0) {
        if (len > MIN) {
            printf("%s", currLine);
        }
    }

    return 0;
}

int countLine (char s[], int max) {

    int c, i;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }   
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
