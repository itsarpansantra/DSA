/*
You are given a circular array arr[] of integers, find the maximum possible sum of a non-empty subarray. In a circular array, the subarray can start at the end and wrap around to the beginning. Return the maximum non-empty subarray sum, considering both non-wrapping and wrapping cases.

Examples:

Input: arr[] = [8, -8, 9, -9, 10, -11, 12]
Output: 22
Explanation: Starting from the last element of the array, i.e, 12, and moving in a circular fashion, we have max subarray as 12, 8, -8, 9, -9, 10, which gives maximum sum as 22.
Input: arr[] = [10, -3, -4, 7, 6, 5, -4, -1]
Output: 23
Explanation: Maximum sum of the circular subarray is 23. The subarray is [7, 6, 5, -4, -1, 10].
Input: arr[] = [5, -2, 3, 4]
Output: 12
Explanation: The circular subarray [3, 4, 5] gives the maximum sum of 12.
*/
# include<iostream>
# include<vector>
using namespace std;
int max_circular_subarray_sum(vector<int>&v){
    int totalSum = 0;
    int maxKadane = arr[0], currMax = 0;
    int minKadane = arr[0], currMin = 0;
    
    for (int x : arr) {
        currMax = max(x, currMax + x);
        maxKadane = max(maxKadane, currMax);
    
        currMin = min(x, currMin + x);
        minKadane = min(minKadane, currMin);
    
        totalSum += x;
    }
    
        // If all numbers are negative
    if (maxKadane < 0)return maxKadane;
    
    return max(maxKadane, totalSum - minKadane);
}
int main(){
    vector<int>v = {10, -3, -4, 7, 6, 5, -4, -1};
    cout<<max_circular_subarray_sum(v);
}