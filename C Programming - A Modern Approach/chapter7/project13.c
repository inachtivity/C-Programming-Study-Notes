/*
* Write a program that calculates the average word length for a sentence:
*
* Enter a sentence: It was deja vu all over again.
*
* Average word length: 3.4
*
* For simplicity, your program should consider a punctuation mark to be 
* part of the word to which it is attached. Display the average word length to one decimal place.
*/


#include <stdio.h>

int main(void) {
    
    int c, x = ' ';
    float words = 0.0f, length = 0.0f, word_length = 0.0f;

    printf("Enter a sentence: ");

    while ( (c = getchar()) != '\n' ) {

        if (c != ' ' && x == ' ') {
            words++;
        } 
        if (c != ' '){
            length++;
        }

        x = c;

    }

    word_length = length / words;
    
    printf("Average Word Length: %.1f\n", word_length);

    return 0;
}