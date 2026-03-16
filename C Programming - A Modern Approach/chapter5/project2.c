/*
* Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:
* 
* Enter a 24-hour time: 21:11
* Equivalent 12-hour time: 9:11 PM
* 
* Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>

int main(void)
{

    int min, hour;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    printf("Equivalent 12-hour time: ");

    switch(hour){

        case 12:
            printf("12:%d PM\n", min);
            break;
        case 13: 
            printf("1:%d PM\n", min);
            break;
        case 14:
            printf("2:%d PM\n", min);
            break;
        case 15:
            printf("3:%d PM\n", min);
            break;
        case 16:
            printf("4:%d PM\n", min);
            break;
        case 17:
            printf("5:%d PM\n", min);
            break;
        case 18:
            printf("6:%d PM\n", min);
            break;
        case 19:
            printf("7:%d PM\n", min);
            break;
        case 20:
            printf("8:%d PM\n", min);
            break;
        case 21:
            printf("9:%d PM\n", min);
            break;
        case 22:
            printf("10:%d PM\n", min);
            break;
        case 23:
            printf("11:%d PM\n", min);
            break;
        case 24:
            printf("12:%d AM\n", min);
            break;
        default:
            printf("%d:%d AM\n", hour, min);
    }

    return 0;
}