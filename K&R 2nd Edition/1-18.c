#include <stdio.h>

/*
* Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.
*/

#define MAX 1000

int myGetLine(char currLine[], int maxLength);

int main(void) {

    int len;
    char currLine[MAX];

    while ((len = myGetLine(currLine, MAX)) > 0)
    {
        printf("%s\n", currLine);
        printf("Input Length: %d\n", len);
    }

    return 0;
}

// function to delete trailing ' ' and '\t'
int myGetLine(char currLine[], int maxLength)
{
    int i, c;

    for (i = 0; i < maxLength - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        currLine[i] = c;
    }
    if (c == '\n')
    {
        while (i > 0 && (currLine[i-1] == ' ' || currLine[i-1] == '\t')) {
            i--;
        }
        currLine[i] = c;
        currLine[i + 1] = '\0';
    }
    currLine[i] = '\0';
    return i;
}