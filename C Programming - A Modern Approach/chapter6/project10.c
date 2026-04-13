/*
Programming Project 9 in Chapter 5 asked you to write a program 
that determines which of two dates comes earlier on the calendar. 
Generalize the program so that the user may enter any number of dates. 
The user will enter 0/0/0 to indicate that no more dates will be entered:

Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07 
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date

*/

#include <stdio.h>

int main (void) 
{
    int month, day, year, earliestMonth, earliestDay, earliestYear;
    
    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0) {
            printf("Initial date cannot be 0/0/0\n");
        }  else {
            earliestMonth = month; earliestDay = day; earliestYear = year;
            break;
        }
    }

    for (;;) {
        
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (month == 0 && day == 0 && year == 0) {
            break;
        }
                
        if (year < earliestYear) {
            earliestMonth = month; earliestDay = day; earliestYear = year;
        } else if (year == earliestYear && month < earliestMonth) {
            earliestMonth = month; earliestDay = day; earliestYear = year;
        } else if ( year == earliestYear && month == earliestMonth && day < earliestDay) {
            earliestMonth = month; earliestDay = day; earliestYear = year;
        }

    }

    printf ("%.2d/%.2d/%.2d is the earliest date.\n", earliestMonth, earliestDay, earliestYear);

    return 0;
}