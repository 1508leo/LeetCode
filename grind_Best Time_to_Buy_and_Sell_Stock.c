#include <stdio.h>
#include <stdlib.h>

int maxProfit(int* prices, int pricesSize){
    int profit=0, store=0;

    for(int i = 0; i < pricesSize; i++){
        if(i == 0) // initialize 
            store = prices[i];
        else{
            if(prices[i] < store) // store the lower price
                store = prices[i];
            else if(profit < prices[i] - store) // compare whether it can get more profit
                profit = prices[i] - store; // store the profit
        }
    }

    return profit;
}