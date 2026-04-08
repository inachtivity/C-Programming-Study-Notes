/*
* Write a program that prompts the user to enter a number n, then prints all even squares between 1 and n. 
* For example, if the user enters 100. the program should print the following:
*
* 4
* 16
* 36
* 64
* 100
*/

#include <stdio.h>

int main(void)
{
    int num, i, j = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; j <= num; i += 2){
            j = i * i;
            if (j <= num) {
                printf("%d\n", j);
            }
    }
    return 0;
}