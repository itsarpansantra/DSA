/*
You are given an integer array prices representing the daily price history of a stock, where prices[i] is the stock price on the ith day.

A smooth descent period of a stock consists of one or more contiguous days such that the price on each day is lower than the price on the preceding day by exactly 1. The first day of the period is exempted from this rule.

Return the number of smooth descent periods.

 

Example 1:

Input: prices = [3,2,1,4]
Output: 7
Explanation: There are 7 smooth descent periods:
[3], [2], [1], [4], [3,2], [2,1], and [3,2,1]
Note that a period with one day is a smooth descent period by the definition.
Example 2:

Input: prices = [8,6,7,7]
Output: 4
Explanation: There are 4 smooth descent periods: [8], [6], [7], and [7]
Note that [8,6] is not a smooth descent period as 8 - 6 ≠ 1.
Example 3:

Input: prices = [1]
Output: 1
Explanation: There is 1 smooth descent period: [1]
*/
# include<iostream>
# include<vector>
using namespace std;
long long stock(vector<int>&v){
    int n= v.size();
    long long count= 1; // first  element
    long long len =1; // current length
    for(int i=1;i<n;i++){
        if((v[i-1]-v[i])==1)len++;
        else len =1;
        count+=len;
    }
    return count;

    // another approach

    // int n = v.size();
    // long long count = 0;
    // int i = 0;
    // for (int j = 1; j <= n; j++) {
    //     if (j < n && v[j - 1] - v[j] == 1) {
    //         continue;
    //     } else {
    //         long long len = j - i;
    //         count += (len * (len + 1)) / 2;
    //         i = j;
    //     }
    // }
    // return count;
}
int main(){
    vector<int>v = {3,2,1,4};
    cout<<stock(v);
}