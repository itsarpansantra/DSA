/*
There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.

 

Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false
 
*/
# include<iostream>
# include<vector>
using namespace std;
// bool search(vector<int>&v,int target){
//     int n = v.size();
//     int low = 0;
//     int high = n-1;

//     while(low<=high){
//         int mid = (low+high)/2;
//         if(v[mid]==target) return true;

//         // duplicates come
//         if(v[low]==v[mid] && v[high]==v[mid]){
//             low++;
//             high--;
//         }
//         // find left part 
//         else if(v[low]<=v[mid]){
//             if(v[low]<=target && target<v[mid]) high = mid-1;
//             else low = mid+1;
//         }

//         // find right part

//         else{
//             if(v[mid]<target && target<=v[high]) low = mid+1;
//             else high = mid-1;
//         }
//     }
//     return false;
// }
bool search(vector<int>&v,int target){ // use pivot 
    int n =v.size();
    if(n==0) return false;
    int pivot =-1;
    int low =0;
    int high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(v[mid]>v[high]) low = mid+1; // pivot right half
        else if(v[mid]<v[high]) high =mid; // pivot left half
        else high--; // for duplicate
    }
    pivot = low; // smallest element

    low,high; // again insialize 
    if(target>=v[pivot] && target <= v[n-1]){ // pivot thaka right part
        low = pivot;
        high = n-1;
    }
    else{ // ar ata left part
        low = 0;
        high = pivot-1;
    }
    while(low<=high){ // normal binary search abar akhana thakla paba nahola paba na 
        int mid = (low+high)/2;
        if(v[mid]==target) return true;
        else if(v[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return false;

}
int main(){
    vector<int>v = {2,5,6,0,0,1,2};
    int target = 0;
    cout<<search(v,target);
}