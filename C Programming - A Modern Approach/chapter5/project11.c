/*
* Write a program that asks the user for a two-digit number, then prints the English word for the number:
*
* Enter a two-digit number: 45 
* You entered the number forty-five.
* 
* Him: Break the number into two digits. 
* Use one switch statement to print the word for the First digit ("twenty." "thirty,'' and so forth). 
* Use a second switch statement to print the word for the second digit. 
* Don't forget that the numbers between 11 and 19 require special treatment.
*
*/

#include <stdio.h>

int main(void)
{
    int num, split_num1, split_num2;
    

    printf("Enter a two-digit number ");
    scanf("%d", &num);

    printf("You entered the number: ");

    if (num >= 10 && num <= 19) {
        switch (num) {
            case 10:
                printf("Ten\n");
                break;
            case 11:
                printf("Eleven\n");
                break;
            case 12:
                printf("Twelve\n");
                break;
            case 13:
                printf("Thirteen\n");
                break;
            case 14:
                printf("Fourteen\n");
                break;
            case 15:
                printf("Fifteen\n");
                break;
            case 16:
                printf("Sixteen\n");
                break;
            case 17: 
                printf("Seventeen\n");
                break;
            case 18:
                printf("Eighteen\n");
                break;
            case 19:
                printf("Nineteen\n");
                break;
        }
    }

    else if (num >= 20 && num <= 99) {

        split_num1 = num / 10;
        split_num2 = num % 10;

        switch (split_num1) {
            case 2:
                printf("Twenty");
                break;
            case 3:
                printf("Thirty");
                break;
            case 4:
                printf("Forty");
                break;
            case 5:
                printf("Fifty");
                break;
            case 6:
                printf("Sixty");
                break;
            case 7:
                printf("Seventy");
                break;
            case 8:
                printf("Eighty");
                break;
            case 9:
                printf("Ninety");
                break;
        }
        if (split_num2 != 0) {

            printf("-");

            switch (split_num2) {
                case 1:
                    printf("One.\n");
                    break;
                case 2:
                    printf("Two.\n");
                    break;
                case 3:
                    printf("Three.\n");
                    break;
                case 4:
                    printf("Four.\n");
                    break;
                case 5:
                    printf("Five.\n");
                    break;
                case 6:
                    printf("Six.\n");
                    break;
                case 7:
                    printf("Seven.\n");
                    break;
                case 8:
                    printf("Eight.\n");
                    break;
                case 9:
                    printf("Nine.\n");
            }
        } else {
            printf(".\n");
        }
        
    }

    else {
        printf("INVALID NUMBER");
    }

    // printf("\n%d %d\n", split_num1, split_num2);



    return 0;
}