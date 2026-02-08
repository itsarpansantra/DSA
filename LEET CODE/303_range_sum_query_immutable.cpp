/*
Given an integer array nums, handle multiple queries of the following type:

Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:

NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 

Example 1:

Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
*/
# include<iostream>
# include<vector>
using namespace std;
class NumArray{
    private:
    vector<int>prefix;
    public:
    NumArray(vector<int>&v){ // constructor
        int n = v.size();
        prefix.resize(n);
        prefix[0] = v[0];
        for(int i=1;i<n;i++){ // create prefix array
            prefix[i] = v[i]+prefix[i-1];
        }
    }
    int sumRange(int left , int right){
        if(left==0) return prefix[right];
        return prefix[right]-prefix[left-1];
    }
};
int main(){
    vector<int>v = {-2, 0, 3, -5, 2, -1};
    NumArray numArray(v);
    cout<<numArray.sumRange(0, 2)<<endl;
    cout<<numArray.sumRange(2, 5)<<endl;
    cout<<numArray.sumRange(0, 5)<<endl;
}