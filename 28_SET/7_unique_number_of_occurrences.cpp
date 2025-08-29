/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences

*/
# include<iostream>
# include<vector>
# include<unordered_map>
# include<unordered_set>
using namespace std;
bool unique(vector<int>&v){
    int n =v.size();
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    unordered_set<int>st;
    for(auto p:m){
        int freq = p.second;
        if(st.find(freq)!=st.end()) return false;
        else st.insert(freq);
    }
    return true;
}
int main(){
    int arr[] = {1,2,2,1,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<unique(v);
}