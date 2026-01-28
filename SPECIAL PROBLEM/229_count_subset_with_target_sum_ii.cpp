/*
Given an array arr[] and an integer k, find the count of subsets whose sum is equals to k.

Note: It is guaranteed that the no of valid subsets will fit within a 32-bit integer.

Examples:

Input: arr[] = [1, 3, 2], k = 3
Output: 2
Explanation: The two subsets whose sum is equals to k are [1, 2] and [3].
Input: arr[] = [4, 2, 3, 1, 2], k = 4
Output: 3
Explanation: The three subsets whose sum is equals to k are [4], [2, 2] and [3, 1].
Input: arr[] = [10, 20, 30], k = 25
Output: 0
Explanation: No subsets exits with sum equals to k.
*/
# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
void generateSums(const vector<long long>& subarray, unordered_map<long long, int>& sumCounts) {
    int n = subarray.size();
        // Use bitmask to get all 2^n combinations
    for (int i = 0; i < (1 << n); i++) {
        long long currentSum = 0;
        for (int j = 0; j < n; j++) {
            if ((i >> j) & 1) {
                currentSum += subarray[j];
            }
        }
        sumCounts[currentSum]++;
    }
}
int count_subset(vector<int>&v,int k){
    int n = arr.size();
    vector<long long> left, right;
        
        // Split array into two halves
    for (int i = 0; i < n; i++) {
        if (i < n / 2) left.push_back(arr[i]);
        else right.push_back(arr[i]);
    }
    
    unordered_map<long long, int> leftSums, rightSums;
    generateSums(left, leftSums);
    generateSums(right, rightSums);
    
    int totalCount = 0;
        // For every sum in left half, check what's needed from the right half
     for (auto const& [sumL, countL] : leftSums) {
        long long needed = k - sumL;
        if (rightSums.count(needed)) {
            totalCount += countL * rightSums[needed];
        }
    }
    
    return totalCount;
}
int main(){
    vector<int>v = {4, 2, 3, 1, 2};
    int k = 4;
    cout<<count_subset(v,k);
}