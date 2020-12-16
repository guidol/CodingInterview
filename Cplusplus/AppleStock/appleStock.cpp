#include <iostream>
#include <vector>

// C++11 lest unit testing framework
#include "lest.hpp"

using namespace std;

int getMaxProfit(const vector<int>& stockPrices)
{
    // calculate the max profit
   int resultMax = *max_element(stockPrices.begin(), stockPrices.end());
   int resultMin = *min_element(stockPrices.begin(), stockPrices.end());
    
    
    return resultMax - resultMin;
}
