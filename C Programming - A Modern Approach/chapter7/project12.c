/*
* Write a program that evaluates an expression:
*
* Enter an expression: 1+2.5*3 
* Value of expression: 10.5
*/

#include <stdio.h>

int main(void) {

    int op;
    float fin_val = 0.0f, operand = 0.0f;

    printf("Enter an expression: ");
    scanf("%f", &operand);
    fin_val = operand;

    while ((op = getchar()) != '\n') {
        
        if (op == ' ' || op == '\t') {
            continue;
        }

        switch (op)
        {
            case '+':
                scanf(" %f", &operand);
                fin_val += operand;
                break;
                
            case '-':
                scanf(" %f", &operand);
                fin_val -= operand;
                break;
            
            case '*':
                scanf(" %f", &operand);
                fin_val *= operand;
                break;            

            case '/':
                scanf(" %f", &operand);
                fin_val /= operand;
                break;
            
            default:
                goto INVALID_OPERATOR;

        }
    }

    printf("Value of expression: %.1f\n", fin_val);

    return 0;

    INVALID_OPERATOR:
        printf("Invalid operator.\n");
        return 1;
}