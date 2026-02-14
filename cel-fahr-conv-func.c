#include <stdio.h>

#define MAX 300
#define MIN 0
#define SKIP 20

float convertCelFahr (float cel);

int main(void) {

    for (float i = MIN; i < MAX; i = i + SKIP) {
        printf("%.1f \t %.1f\n", i, convertCelFahr(i));
    }

    return 0;
    
}

float convertCelFahr (float cel) {

    float fahr;

    fahr = cel * (9.0/5.0) + 32;

    return fahr;

}