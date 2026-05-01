#include <stdio.h>

/*
* Modify the square2 . c program of Section 6.3 so that it pauses 
* after every 24 squares and displays the following message:
* 
* Press Enter to continue...
*
* After displaying the message, the program should use getchar to read a character, 
* getchar won’t allow the program to continue until the user presses the Enter key.
*
*/

int main(void)
{
    int num;

    printf("Enter number of entries in table: ");
    scanf("%d", &num);
    getchar();

    for (int i = 1; i <= num; i++)
    {
        printf("%10d%10d\n", i, i * i);

        if ((i % 24) == 0) {
            printf("Press Enter to Continue\n");
            getchar();
        }
    }

    return 0;
}