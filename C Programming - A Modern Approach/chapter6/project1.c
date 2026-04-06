/*
*
* Write a program that finds the largest in a series of numbers entered by the user. 
* The program must prompt the user to enter numbers one by one. 
* When the user enters 0 or a negative number, the program must display the largest nonnegative number entered:
*
* Enter a number: 60 
* Enter a number: 38.3 
* Enter a number: 4.89 
* Enter a number: 100.62 
* Enter a number: 75.2295 
* Enter a number: 0
*
* The largest number entered was 100.62
*
*/

#include <stdio.h>

int main(void)
{

    float num, largestNum;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0) {
        largestNum = num;

        while (num > 0) {
            printf("Enter a number: ");
            scanf("%f", &num);
            if (num > largestNum) {
                largestNum = num;
            }
        }
        
        printf("The largest number entered was %f\n", largestNum);

    } else {
        printf("Invalid input\n");
    }
   
    return 0;
}