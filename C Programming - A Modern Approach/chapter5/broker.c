/*
*
* a program that will compute commision rate based on the value of trade
*
* Transaction size    Commission rate 
*
* Under $2,500        $30 + 1.7%
* $2,500-$6,250       $56 + 0.66%
* $6,250-$20,000      $76 + 0.34%
* $20,000-$50,000     $100 + 0.22%
* $50.000-$500,000    $155 + 0.11%
* Over $500,000       $255 + 0.09%
*
* e.g.,
* Enter value of trade: 30000 
* Commission: $166.00
*
*/

#include <stdio.h>

int main(void)
{

    float trade_value, comm_rate;

    printf("Enter the value of trade: ");
    scanf("%f", &trade_value);

    if (trade_value < 2500.00){
        comm_rate = 30.00 + (trade_value * .017);
    }
    else if (trade_value >= 2500.00 && trade_value < 6250.00){
        comm_rate = 56.00 + (trade_value * 0.0066);
    }
    else if (trade_value >= 6250.00 && trade_value < 20000.00){
        comm_rate = 76.00 + (trade_value * 0.0034);
    }
    else if (trade_value >= 20000.00 && trade_value < 50000.00){
        comm_rate = 100.00 + (trade_value * 0.0022);
    }
    else if (trade_value >= 50000.00 && trade_value < 500000.00){
        comm_rate = 155.00 + (trade_value * 0.0011);
    }
    else {
        comm_rate = 255.00 + (trade_value * 0.0009);
    }

    printf("Commission: %.2f\n", comm_rate);

    return 0;
}
