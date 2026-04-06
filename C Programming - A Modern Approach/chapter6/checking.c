/*
*
* A program that maintains a checkbook balance. The program will offer the user a menu of choices: 
* clear the account balance, credit money to the account, debit money from the account, 
*display the current balance, and exit the program. 
*
*/

#include <stdio.h>

int main(void)
{

    int command;
    float balance = 0.0f, credit, debit;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");


    for(;;) {
        printf("Enter command: ");
        scanf("%d", &command);

        switch(command){
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter the amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter the amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Your balance is %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Command!\n");
                printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
                break;
        }

    }


    return 0;
}