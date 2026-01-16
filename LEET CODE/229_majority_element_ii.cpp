/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
*/
# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
vector<int>majority(vector<int>&v){
    int n = v.size();
    unordered_map<int,int>mp;
    vector<int>ans;
    for(int x:v) mp[x]++;
    for(auto a:mp){
        if(a.second>n/3) ans.push_back(a.first);
    }
    return ans;
}
int main(){
    vector<int>v = {3,2,3};
    vector<int>p=majority(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}