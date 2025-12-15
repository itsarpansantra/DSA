/*
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
*/
//step1: question minimum length of sub array . 
// step2 : two pointer approach
// step3: double while loop . check amar je length ta payachi or thaka choto length poa jay ke na 
// pala update 
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int subarray_size(vector<int>&v,int target){
    int n = v.size();
    int sum =0;
    int len =0;
    int min_len=INT_MAX;
    int i=0,j=0;
    while(j<n){
        sum+=v[j];
        while(target<=sum){
            len = j-i+1;
            min_len = min(min_len,len);
            sum-=v[i];
            i++;
        }
        j++;
    }
    return min_len;
}
int main(){
    vector<int>v={1,2,4,6,3,4,3};
    int target = 10;
    cout<<subarray_size(v,target);
}