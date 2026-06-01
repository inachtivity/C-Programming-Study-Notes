/*
* Modify Programming Project 8 from Chapter 5 so that the user enters a time using the 12hour clock. 
* The input will have the form hours:minutes followed by either A, P, AM. or PM (either lower-case or upper-case). 
* White space is allowed (but not required) between the numerical time and the AM/PM indicator. Examples of valid input:
*
* 1:15P 
* 1:15PM 
* 1:15p 
* 1:15pm 
* 1:15 P 
* 1:15 PM 
* 1:15 p 
* 1:15 pm
*
*/

#include <stdio.h>
#include <ctype.h>

#define MAXMIN 60

int main(void)
{
    int hour, min, min_total, dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;
    int mid1, mid2, mid3, mid4, mid5, mid6, mid7;
    char am_pm;
 
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &am_pm);

    am_pm = toupper(am_pm);


    if (am_pm == 'A' || am_pm == 'P')
    {

        if (am_pm == 'P' && hour != 12) {
        hour += 12;
        }

        if (am_pm == 'A' && hour == 12) {
            hour = 0;
        }

        // convert to mins
        min_total = (hour * MAXMIN) + min;

        // converted the departure time to minutes
        dep1 = 480; dep2 = 583; dep3 = 679; dep4 = 767; dep5 = 840;
        dep6 = 945; dep7 = 1140; dep8 = 1305;

        // compute the middle point of the departure times;
        mid1 = (dep1 + dep2) / 2;
        mid2 = (dep2 + dep3) / 2;
        mid3 = (dep3 + dep4) / 2;
        mid4 = (dep4 + dep5) / 2;
        mid5 = (dep5 + dep6) / 2;
        mid6 = (dep6 + dep7) / 2;
        mid7 = (dep7 + dep8) / 2;

        if (min_total < mid1) {
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
        } 
        else if (min_total < mid2) {
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        }
        else if (min_total < mid3) {
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        }
        else if (min_total < mid4) {
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
        }
        else if (min_total < mid5) {
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
        }
        else if (min_total < mid6) {
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
        }
        else if (min_total < mid7) {
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        }
        else {
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
        }
 
    }
    
    else {
        printf("invalid AM/PM indicator\n");
    }

    return 0;
}