/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int>sorted(vector<int>&v){
    int n = v.size();
    for(int i=0;i<n;i++){
        v[i] = v[i]*v[i];
    }
    sort(v.begin(),v.end());
    return v;
}
int main(){
    vector<int>v = {-4,-1,0,3,10};
    vector<int>p = sorted(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}