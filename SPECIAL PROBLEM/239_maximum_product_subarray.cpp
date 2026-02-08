/*
Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

Note: It is guaranteed that the answer fits in a 32-bit integer.

Examples

Input: arr[] = [-2, 6, -3, -10, 0, 2]
Output: 180
Explanation: The subarray with maximum product is [6, -3, -10] with product = 6 * (-3) * (-10) = 180.
Input: arr[] = [-1, -3, -10, 0, 6]
Output: 30
Explanation: The subarray with maximum product is [-3, -10] with product = (-3) * (-10) = 30.
Input: arr[] = [2, 3, 4] 
Output: 24 
Explanation: For an array with all positive elements, the result is product of all elements. 
*/
# include<iostream>
using namespace std;
int max_sum_subarray(vector<int>&v){
    int n = v.size();
    int ans = INT_MIN;
    int prefix =1 , sufix = 1;
    for(int i=0;i<n;i++){
        prefix*=v[i];
        sufix*=v[n-i-1];
        ans = max(ans,max(prefix,sufix));
        if(prefix==0) prefix =1;
        if(sufix==0) sufix =1;
    }
    return ans;
}
int main(){
    vector<int>v ={-2, 6, -3, -10, 0, 2}
    cout<<max_sum_subarray(v);
}