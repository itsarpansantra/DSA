/*
Given an array arr[] consisting of n integers, the task is to find all the array elements which occurs more than floor(n/3) times.

Note: The returned array of majority elements should be sorted.

Examples:

Input: arr[] = [2, 2, 3, 1, 3, 2, 1, 1]
Output: [1, 2]
Explanation: The frequency of 1 and 2 is 3, which is more than floor n/3 (8/3 = 2).
Input:  arr[] = [-5, 3, -5]
Output: [-5]
Explanation: The frequency of -5 is 2, which is more than floor n/3 (3/3 = 1).
Input:  arr[] = [3, 2, 2, 4, 1, 4]
Output: []
Explanation: There is no majority element.
*/
# include<bits/stdc++.h>
using namespace std;
vector<int>majority(vector<int>&arr){
    vector<int>ans;
    unordered_map<int,int>mp;
    int n = arr.size();
    for(int i:arr){
        mp[i]++;
    }
    for(auto x:mp){
        if(x.second > n/3) ans.push_back(x.first);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>arr= {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int>a = majority(arr);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    } 
}