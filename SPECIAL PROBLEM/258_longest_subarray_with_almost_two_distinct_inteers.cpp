/*
Given an array arr[] consisting of positive integers, your task is to find the length of the longest subarray that contains at most two distinct integers.

Examples:

Input: arr[] = [2, 1, 2]
Output: 3
Explanation: The entire array [2, 1, 2] contains at most two distinct integers (2 and 1). Hence, the length of the longest subarray is 3.
Input: arr[] = [3, 1, 2, 2, 2, 2]
Output: 5
Explanation: The longest subarray containing at most two distinct integers is [1, 2, 2, 2, 2], which has a length of 5.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarray(vector<int>& arr) {
    unordered_map<int,int> mp;
    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < arr.size(); right++) {
        mp[arr[right]]++;

        // If more than 2 distinct elements, shrink window
        while (mp.size() > 2) {
            mp[arr[left]]--;
            if (mp[arr[left]] == 0)
                mp.erase(arr[left]);
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}
int main(){
    vector<int>v = {3, 1, 2, 2, 2, 2};
    cout<<longestSubarray(v);
}