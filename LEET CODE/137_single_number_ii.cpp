/*
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,3,2]
Output: 3
Example 2:

Input: nums = [0,1,0,1,0,1,99]
Output: 99
*/
// in array 1 element present 1 but other element present 3 . return only one element
# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
int single(vector<int>&v){
    unordered_map<int,int>freq; 
    for(int x:v) freq[x]++; // count element with frequency 
    for(auto a&:freq){ //
        if(a.second==1) return a.first; // which freq 1 return the element 
    }
    return -1;
}
int main(){
    vector<int>v = {0,1,0,1,0,1,99};
    cout<<single(v);
}