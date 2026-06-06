/*
* Write a program that takes a first name and last name entered by the user 
* and displays the last name, a comma, and the first initial, followed by a period:
* 
* Enter a first and last name: Lloyd Fosdick 
* Fosdick, L.
* 
* The user’s input may contain extra spaces before the first name, 
* between the first and last names, and after the last name.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    int ch;
    char firstN;

    printf("Enter a first and last name: ");

    do {
        ch = getchar();
    } while (ch == ' ' || ch == '\t');

    firstN = toupper(ch);

    while ((ch = getchar()) != ' ') {
        ;
    }
    
    while((ch = getchar()) == ' ') {
        ;
    }

    putchar(ch);

    while ((ch = getchar()) != ' ' && ch != '\n') {
        putchar(ch);
    }

    printf(", %c.\n", firstN);

    return 0;
}