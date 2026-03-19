/*
* Using the switch statement, write a program that converts a numerical grade into a letter grade:
*
* Enter numerical grade: 84 
* Letter grade: B
* 
* Use the following grading scale: 
*
* A = 90-100. 
* B = 80-89, 
* C = 70-79, 
* D = 60-69. 
* F = 0-59. 
* 
* Print an error message if the grade is larger than 100 or less than 0. 
* Hint: Break the grade into two digits, then use a switch statement to test the ten’s digit.
*
*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid grade\n");
    }

    else{
        grade = grade / 10;

        switch (grade) {
            case 9: case 10:
                printf("Letter Grade: A\n");
                break;
            case 8: 
                printf("Letter Grade: B\n");
                break;
            case 7:
                printf("Letter Grade: C\n");
                break;
            case 6:
                printf("Letter Grade: D\n");
                break;
            case 5: case 0: case 1: case 2: case 3: case 4:
                printf("Letter Grade: F\n");
                break;
        }
    }
    return 0;
}