/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
*/
# include<iostream>
# include<vector>
using namespace std;
int check(vector<int>&v,int target){
    int n = v.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(v[mid]==target){
                return mid;
            }
            else if(v[mid]<target) low = mid+1;
            else high = mid-1;
        }
    return low;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    int target = 4;
    cout<<check(v,target);
}