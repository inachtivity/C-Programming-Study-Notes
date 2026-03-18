/*
* Modify the upc.c program of Section 4.1 so that it checks whether a UPC is valid. 
* After the user enters a UPC, the program will display either VALID or NOT VALID.
*/

#include <stdio.h>

int main(void)
{

    int item_type, man1, man2, man3, man4, man5, prod1, prod2, prod3, prod4, prod5, 
    first_sum, second_sum, check_digit, valid_check_digit;

    printf("Enter a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &item_type, &man1, &man2, &man3, &man4, &man5,
        &prod1, &prod2, &prod3, &prod4, &prod5, &check_digit);

    first_sum = item_type + man2 + man4 + prod1 + prod3 + prod5;
    second_sum = man1 + man3 + man5 + prod2 + prod4;
    valid_check_digit = 9 - ((((first_sum * 3) + second_sum) - 1) % 10);

    if (check_digit == valid_check_digit){
        printf("UPC is valid\n");
    } else {
        printf("Invalid UPC\n");
    }

    return 0;
}