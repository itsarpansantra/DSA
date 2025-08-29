/*
Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].

Return the maximum difference. If no such i and j exists, return -1.
Example 1:

Input: nums = [7,1,5,4]
Output: 4
Explanation:
The maximum difference occurs with i = 1 and j = 2, nums[j] - nums[i] = 5 - 1 = 4.
Note that with i = 1 and j = 0, the difference nums[j] - nums[i] = 7 - 1 = 6, but i > j, so it is not valid.

*/
# include<iostream>
# include<vector>
# include<cmath>
using namespace std;
int max_difference(vector<int>&v){
    int max_diff =-1; // by default return 
    int min_val=v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>min_val) max_diff = max(max_diff,(v[i]-min_val));
        else min_val = v[i];
    }
    return max_diff;
}
int main(){
    int arr[] = {7,1,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n ;i++){
        v[i]=arr[i];
    }
    cout<<max_difference(v);
}