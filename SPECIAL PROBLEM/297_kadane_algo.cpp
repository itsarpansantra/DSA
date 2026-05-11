/*
You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.
Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.
*/
#include<bits/stdc++.h>
using namespace std;
int kadane_algo(vector<int>&v){
    int maxi = v[0];
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += arr[i];
        maxi = max(maxi, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    vector<int>v = {2, 3, -8, 7, -1, 2, 3};
    cout<<kadane_algo(v);
}