/*
you are given an array arr[], in which arr[i] is the price of a given stock on the ith day and an integer k represents a transaction fee. Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

Examples:

Input: arr[] = [6, 1, 7, 2, 8, 4], k = 2
Output: 8
Explanation:
Buy the stock on day 2 and sell it on day 3 => 7 – 1 -2 = 4
Buy the stock on day 4 and sell it on day 5 => 8 – 2 - 2 = 4
Maximum Profit  = 4 + 4 = 8
Input: arr[] = [7, 1, 5, 3, 6, 4], k = 1
Output: 5
Explanation: 
Buy the stock on day 2 and sell it on day 3 => 5 – 1 - 1 = 3
Buy the stock on day 4 and sell it on day 5 => 6 – 3 - 1 = 2
Maximum Profit  = 3 + 2 = 5
*/
# include<bits/stdc++.h>
using namespace std;
int stock(vector<int>&arr,int k){
    int n = arr.size();
    int hold = -arr[0]; // buying first stock
    int cash = 0;       // no stock in hand
        
    for(int i = 1; i < n; i++) {
        cash = max(cash, hold + arr[i] - k); // sell
        hold = max(hold, cash - arr[i]);     // buy
    }
        
    return cash;
}
int main(){
    vector<int>arr= {6, 1, 7, 2, 8, 4};
    int k=2;
    cout<<stock(arr,k);
}