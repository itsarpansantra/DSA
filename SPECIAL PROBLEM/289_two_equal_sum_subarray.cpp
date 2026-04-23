/*
Given an array of integers arr[], return true if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible then return false.

Examples:

Input: arr[] = [1, 2, 3, 4, 5, 5]
Output: true
Explanation: We can divide the array into [1, 2, 3, 4] and [5, 5]. The sum of both the subarrays are 10.
Input: arr[] = [4, 3, 2, 1]
Output: false
Explanation: We cannot divide the array into two subarrays with equal sum.
*/
# include<bits/stdc++.h>
using namespace std;
bool two_equal_sum(vector<int>&v){
    int n = arr.size();
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2!=0) return false;
    int target = sum/2;
    int curr=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr==target) return true;
    }
    return false;
}
int main(){
    vector<int>v = {1, 2, 3, 4, 5, 5};
    cout<<two_equal_sum(v);
}