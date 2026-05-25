/*
* In the SCRABBLE Crossword Came, players form words using small tiles, 
* each containing a letter and a face value. The face value varies from one letter to another, 
* based on the letter’s rarity. 
*
* (Here are the face values: 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.) 
* 
* Write a program that computes the value of a word by summing the values of its letters:
* 
* Enter a word: pitfall 
* Scrabble value: 12
*
*/

#include <stdio.h>
#include <ctype.h>

int main (void) {

    char c, upper;
    int points = 0;

    printf("Enter a word: ");
    
    while ((c = getchar()) != '\n') {

        upper = toupper(c);
    
        if  (upper == 'A' || upper == 'E' || upper == 'I' || upper == 'L' || upper == 'N' || upper == 'O'
            || upper == 'R' || upper == 'S' || upper == 'T' || upper == 'U') {
                points += 1;
            }
        else if (upper == 'D' || upper == 'G') {
            points += 2;
        }
        else if (upper == 'B' || upper == 'C' || upper == 'M' || upper == 'P') {
            points += 3;
        }
        else if (upper == 'F' || upper == 'H' || upper == 'V' || upper == 'W' || upper == 'Y') {
            points += 4;
        }
        else if (upper == 'K') {
            points += 5;
        }
        else if (upper == 'J' || upper == 'X') {
            points += 8;
        }
        else if (upper == 'Q' || upper == 'Z') {
            points += 10;
        }

    }

    printf("Scrabble Value: %d\n", points);

    return 0;
}