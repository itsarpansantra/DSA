/*
A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

 

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
*/
# include<iostream>
# include<vector>
using namespace std;
int peak_element(vector<int>&v){
    // 2 small element in big elemnt 
    // it say that v[-1] is present and v[n] also present 
    int low = 0;
    int high = v.size()-1;
    while(low<high){
        int mid = (low+high)/2;
        if(v[mid]<v[mid+1]) low = mid+1; // in left all element are small go right 
        else high = mid; // right side all elemnt big go left 
    }
    return low;
}
// another processes
// int peak_element(vector<int>&v){
//     // 2 small element in big elemnt 
//     // it say that v[-1] is present and v[n] also present 
//     int n = v.size();
//     if(n==1) return 0;
//     else if(v[0]>v[1]) return 0; // because v[-1] is less v[0] . check on fornt
//     else if(v[n-1]>v[n-2]) return n-1; // because v[n-1]>v[n] . check last
//     // now check on middle
//     for(int i=1;i<n-1;i++){
//         if(v[i]>v[i-1] && v[i]>v[i+1]) return i;
//     }
//     return -1;
// }
int main(){
    vector<int>v = {1,2,1,3,5,6,4};
    cout<<peak_element(v);
}