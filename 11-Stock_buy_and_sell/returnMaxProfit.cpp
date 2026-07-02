/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
you want to maximize your profit by choosing the single day to buy one stock and choosing a different 
day to sell it in the future.
RETURN THE MAX PROFIT
*/
#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> prices){
    int maxProfit=0, bestBuy=prices[0];   //bestBuy is actually the minimum price at which we can buy stock
    for(int i=1; i<prices.size(); i++){
        if(prices[i]> bestBuy){   // that means it is a profit otw if bestbuy is greater that means its a loss
            maxProfit= max(maxProfit, prices[i]- bestBuy);
        }
        bestBuy=min(bestBuy, prices[i]);
    }
    return maxProfit;
}
int main(){
    vector<int> vec= {7,1,5,3,6,4};
    cout<<"Maximum profit = "<<maxProfit(vec)<<endl;
    return 0;
}