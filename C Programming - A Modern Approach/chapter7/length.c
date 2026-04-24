#include <stdio.h>

// a program that determines the length of an input message

int main (void)
{

    char ch;
    int len = 0;
    
    printf("Enter a message: ");
    ch = getchar();

    while (ch != '\n') {
        len++;
        ch = getchar();
    }

    printf("Your message is %d characters long\n", len);

    return 0;
}