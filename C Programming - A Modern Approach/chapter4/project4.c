/*
* Write a program that reads an integer entered by the user and displays it in octal (base 8):
*
* Enter a number between 0 and 32767: 1953 
* In octal, your number is: 03641
*
* The output should be displayed using five digits, even if fewer digits are sufficient. 
* Hint: To convert the number to octal, first divide it by 8; the remainder is the last digit of the octal number (1, in this case). 
* Then divide the original number by 8 and repeat the process to arrive at the next-to-last digit, 
* (printf is capable of displaying numbers in base 8. as we’ll see in Chapter 7. so there’s actually an easier way to write this program.)
*/

#include <stdio.h>

#define BASE_8 8

int main(void)
{

    int dec, a, b, c, d, e;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &dec);

    e = dec % 8;
    dec /= BASE_8;
    d = dec % 8;
    dec /= BASE_8;
    c = dec % 8;
    dec /= BASE_8;
    b = dec % 8;
    dec /= BASE_8;
    a = dec % 8;


    printf("In octal, your number is: %d%d%d%d%d\n", a, b, c, d, e);

    return 0;
}