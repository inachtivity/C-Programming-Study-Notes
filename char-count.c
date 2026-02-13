#include <stdio.h>

int main(){

    long c;

    // for ( c=0; getchar() != EOF; c++ ){
    //     printf("%ld\n", c);
    // }

    // return 0;

    c = 0;
    while ( getchar() != EOF ){
        c++;
        printf("%ld\n", c);
        
    }
    return 0;
}