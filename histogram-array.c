#include <stdio.h>

#define MAX 10

int main(void) {

    int c;
    int wordLength[MAX] = { 0 };
    int currLength = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (currLength > 0 && currLength < MAX){
                ++wordLength[currLength];
            }
            currLength = 0;
        } else {
            ++currLength;
        }

    }

    for (int i = 1; i < MAX; ++i) {
        printf("Word Length %d: ", i);
        for (int j = 0; j < wordLength[i]; ++j) {
            printf("#");
        }
        printf("\n");
    }
}
