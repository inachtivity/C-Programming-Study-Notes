#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 10

// int main(){

// // while loop

//     int cel, fahr;
//     int low, high, step;

//     low = 0;
//     high = 300;
//     step  = 10;


//     cel = low;

//     printf("---------------------------\n");
//     printf("Celsius\t|\tFahrenheit\n");
//     printf("---------------------------\n");

//     while (cel <= high){

//         fahr = (cel * (9/5)) + 32;

//         printf("%d\t|\t%d\n", cel, fahr);

//         cel = cel + step;
//     }

//     return 0;
// }

// reverse order from 300 celsius to 0

#define LOWER 0
#define UPPER 300
#define STEP 10

int main(){

    int fahr;

    printf("---------------------------\n");
    printf("Celsius\t|\tFahrenheit\n");        
    printf("---------------------------\n");

    for ( fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP ){

        printf("%d \t|\t %.1f\n", fahr, fahr * (9.0/5.0) + 32);

    }

    return 0;

}