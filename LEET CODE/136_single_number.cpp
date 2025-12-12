/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1

*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int single(vector<int>&v){
    sort(v.begin(),v.end());
    int n=v.size();
    if(n==1) return v[0];
    for(int i=0;i<n;i++){
        if(i==n-1 && v[i]!=v[i-1]) return v[i];
        else if(i==0 && v[i]!=v[i+1]) return v[i];
        else if(v[i]!=v[i+1] && v[i]!=v[i-1]) return v[i];
    }
}
// int singleNumber(vector<int>& v) {
//         int result = 0;
//         for (int num : v) {
//             result ^= num;  // XOR operator use . better TC and space 
//         }
//         return result;
//     }
int main(){
    int arr[] = {2,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<single(v);
}