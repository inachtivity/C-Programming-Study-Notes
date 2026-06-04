/*
* Write a program that counts the number of vowels ( a, e, i, o, and u) in a sentence:
* 
* Enter a sentence: And that's the way it is.
*
* Your sentence contains 6 vowels.
*
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    int ch, vowel_count = 0;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n') {
        
        ch = tolower(ch);

        if ( ch == 'a' || ch == 'e' || ch == 'i' 
            || ch == 'o' || ch == 'u' ) {
            vowel_count++;
        }
    }

    printf("Your sentence contains %d vowels\n", vowel_count);
    
    return 0;

}