/*
* Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xxx:
*
* Enter phone number [ (xxx) xxx-xxxx]: (404) 817-6900 
* You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{

    int first, second, third;

    printf("Enter phone number [ (xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &first, &second, &third);

    printf("You entered %d.%d.%d\n", first, second, third);

    return 0;
}