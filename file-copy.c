#include <stdio.h>

int main(){

    int c;

    // while( (c = getchar()) != EOF){
    //     putchar(c);
    // }

    // c = EOF;

    c = getchar() != EOF;

    printf("%d\n", c);

    return 0;
}