/*
* Modify the reverse.c program of Section 8.1 
* to use the expression (int) (sizeof (a) / sizeof (a [0] )) 
* (or a macro with this value) for the array length.
*/

#include <stdio.h>

#define SIZE(a) ((int) (sizeof(a) / sizeof(a[0]))) 
#define N 10

int main(void) {

int a[N], i;

printf("Enter %d numbers: ", SIZE(a));

for (i = 0; i < SIZE(a); i++){
    scanf("%d", &a[i]);
}

printf("In reverse order: ");

for (i = SIZE(a) - 1; i >= 0; i--){
    printf("%d ", a[i]);
}

printf("\n");
return 0;
    
}