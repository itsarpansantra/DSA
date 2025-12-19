/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
*/
# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
// code coreect when all aray element unique and non negative


// int subarray_count(vector<int>&v,int k){
//     int n = v.size();
//     int count =0;
//     for(int i=1;i<n;i++){
//         v[i]+= v[i-1];
//     }
//     for(int i=0;i<n;i++){
//         if(v[i]<k)continue;
//         else if(v[i]==k) count++;
//         else if(v[i]>k){
//             int target = v[i]-k;
//             int low = 0;
//             int high = i-1;
//             while(low<=high){
//                 int mid = (low+high)/2;
//                 if(v[mid]==target) count++;
//                 else if(v[mid]>target) high=mid-1;
//                 else low=mid+1;
//             }
//         }

//     }
//     return count;
// }

// another approach 
// prefix sum and hash map
int subarray_count(vector<int>&v,int k){
    int n = v.size();
    for(int i=1;i<n;i++){ // prefix sum 
        v[i]+=v[i-1];
    }
    unordered_map<int,int>mp; 
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]==k) count++; // presum element equal to k its a subarray
        int rem = (v[i]-k); // 
        if(mp.find(rem)!=mp.end()) count+=mp[rem]; // mp present hola frequency add hoba 
        mp[v[i]]++; // push element in map . or same element frequency increase
    }
    return count;
}
int main(){
    vector<int>v = {3,2,4,5,2,8,1,2,7};
    int k=9;
    cout<<subarray_count(v,k);
}