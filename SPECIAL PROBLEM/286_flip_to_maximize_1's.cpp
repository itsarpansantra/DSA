/*
Given an array arr[] consisting of 0’s and 1’s. A flip operation involves changing all 0's to 1's and all 1's to 0's within a contiguous subarray. Formally, select a range (l, r) in the array arr[], such that (0 ≤ l ≤ r < n) holds and flip the elements in this range.

Return the maximum number of 1's you can get in the array after doing at most 1 flip operation.

Examples :

Input: arr[] = [1, 0, 0, 1, 0]
Output: 4
Explanation: By flipping the subarray from index 1 to 2, the array becomes [1, 1, 1, 1, 0]. This results in a total of 4 ones, which is the maximum possible after at most one flip.
Output: 6
Explanation: By flipping the subarray from index 1 to 5, the array becomes [1, 1, 1, 0, 1, 1, 1]. This results in a total of 6 ones, which is the maximum possible after at most one flip.
*/
# include<bits/stdc++.h>
using namespace  std;
int flip(vector<int>&v){
    int n = v.size();

    int totalOnes = 0;
    for (int x : v) {
        if (x == 1) totalOnes++;
    }
    
    // Apply Kadane on transformed array
    int maxSum = 0, currSum = 0;
    
    for (int i = 0; i < n; i++) {
        int val = (v[i] == 0) ? 1 : -1;
    
        currSum = max(val, currSum + val);
        maxSum = max(maxSum, currSum);
    }
    
    return totalOnes + maxSum;
}
int main(){
    vector<int>v = {1, 0, 0, 1, 0};
    cout<<flip(v);
}