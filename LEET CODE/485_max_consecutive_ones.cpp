/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
*/
# include<iostream>
# include<vector>
using namespace std;
int ones(vector<int>&v){
    int n = v.size();
    int maxcount =0;
    int count =0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            count++;
            maxcount = max(maxcount,count);
        }
        else count=0;
    }
    return maxcount;
}
int main(){
    vector<int>v = {1,1,0,1,1,1};
    cout<<ones(v);
}