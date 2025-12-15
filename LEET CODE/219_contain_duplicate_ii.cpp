/*
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

 

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
bool duplicate(vector<int>&v,int k){
    int n = v.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j] && abs(i-j)<=k) return true;
        }
    }
    return false;

    // this approach we use TIME LIMIT EXEDDED

    // unordered_set<int> window;
    //     for(int i = 0; i < nums.size(); i++) {
    //         if(window.count(nums[i])) return true; // found duplicate in window
    //         window.insert(nums[i]);
    //         if(window.size() > k) {
    //             window.erase(nums[i - k]); // remove element out of range
    //         }
    //     }
    //     return false;

}
int main(){
    int arr[]={1,2,3,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int k =2;
    cout<<duplicate(v,k);
}