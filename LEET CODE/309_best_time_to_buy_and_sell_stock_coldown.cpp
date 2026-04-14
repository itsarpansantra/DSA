/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times) with the following restrictions:

After you sell your stock, you cannot buy stock on the next day (i.e., cooldown one day).
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

 

Example 1:

Input: prices = [1,2,3,0,2]
Output: 3
Explanation: transactions = [buy, sell, cooldown, buy, sell]
Example 2:

Input: prices = [1]
Output: 0
*/
# include<bits/stdc++.h>
using namespace std;
int best_time(vector<int>&v){
    int n = prices.size();
    if(n <= 1) return 0;

    int buy = -prices[0];  // holding stock
    int sell = 0;          // just sold
    int cool = 0;          // cooldown / rest

    for(int i = 1; i < n; i++) {
        int prev_buy = buy;
        int prev_sell = sell;
        int prev_cool = cool;

        buy = max(prev_buy, prev_cool - prices[i]);
        sell = prev_buy + prices[i];
        cool = max(prev_cool, prev_sell);
    }

    return max(sell, cool);
}
int main(){
    vector<int>v = {1,2,3,0,2};
    cout<<best_time(v);
}