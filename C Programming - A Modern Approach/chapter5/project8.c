/*
* The following table shows the daily flights from one city to another:
*
* Departure time      Arrival time
* 8:00 a.m.           10:16 a.m.
* 9:43 a.m.           11:52 a.m.
* 11:19 a.m.          1:31 p.m.
* 12:47 p.m.          3:00 p.m
* 2:00 p.m.           4:08 p.m.
* 3:45 p.m.           5:55 p.m.
* 7:00 p.m.           9:20 p.m.
* 9:45 p.m.           11:58 p.m.
* 
* Write a program that asks user to enter a time (expressed in hours and minutes, 
* using the 24hour clock). The program then displays the departure and arrival times for 
* the flight whose departure time is closest to that entered by the user:
* 
* Enter a 24-hour time: 13:15
* Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
*
*/

#include <stdio.h>
#define MAXMIN 60

int main(void)
{
    int hour, min, min_total, dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;
    int mid1, mid2, mid3, mid4, mid5, mid6, mid7;
 
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);

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
    
    return 0;
}