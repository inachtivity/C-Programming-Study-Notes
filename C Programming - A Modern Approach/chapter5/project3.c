/*
 Modify the broker. c program of Section 5.2 by making both of the following changes:

(a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.

(b) Add statements that compute the commission charged by a rival broker ($33 plus 3C per share for fewer than 2000 shares; 
$33 plus 2c per share for 2000 shares or more). Dis¬ play the rival’s commission as well as the commission charged by the original broker.

*/

#include <stdio.h>

int main(void)
{

    float trade_value, og_comm_rate, rival_comm_rate, share_price;
    int shares;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);
    
    printf("Enter the price per share: ");
    scanf("%f", &share_price);

    trade_value = shares * share_price;

    // OG Broker
    if (trade_value < 2500.00){
        og_comm_rate = 30.00 + (trade_value * .017);
    }
    else if (trade_value >= 2500.00 && trade_value < 6250.00) {
        og_comm_rate = 56.00 + (trade_value * 0.0066);
    }
    else if (trade_value >= 6250.00 && trade_value < 20000.00) { 
        og_comm_rate = 76.00 + (trade_value * 0.0034); 
    }
    else if (trade_value >= 20000.00 && trade_value < 50000.00) {
        og_comm_rate = 100.00 + (trade_value * 0.0022);
    }
    else if (trade_value >= 50000.00 && trade_value < 500000.00) {
        og_comm_rate = 155.00 + (trade_value * 0.0011);
    }
    else {
        og_comm_rate = 255.00 + (trade_value * 0.0009);
    }

    // Rival commission
    if (shares < 2000.00) {
        rival_comm_rate = 33 + (shares * 0.03);
    }
    else {
        rival_comm_rate = 33 + (shares * 0.02);
    }

    printf("OG Commission rate: %.2f\n", og_comm_rate);
    printf("Rival Commission: %.2f\n", rival_comm_rate);

    return 0;
}
