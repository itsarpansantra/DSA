/*
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

 

Example 1:

Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation:  [5, 3] is also a valid answer.
Example 2:

Input: nums = [-1,0]
Output: [-1,0]
Example 3:

Input: nums = [0,1]
Output: [1,0]
*/
# include<iostream>
# include<climits>
# include<vector>
# include<unordered_map>
using namespace std;
vector<int>single(vector<int>&v){
    vector<int>ans;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(auto a:mp){
        if(a.second==1) ans.push_back(a.first);
    }
    return ans;
}
int main(){
    vector<int>v = {7,1,5,3,6,4};
    vector<int>p = single(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}