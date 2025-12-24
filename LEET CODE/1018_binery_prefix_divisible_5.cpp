/*
You are given a binary array nums (0-indexed).

We define xi as the number whose binary representation is the subarray nums[0..i] (from most-significant-bit to least-significant-bit).

For example, if nums = [1,0,1], then x0 = 1, x1 = 2, and x2 = 5.
Return an array of booleans answer where answer[i] is true if xi is divisible by 5.

 

Example 1:

Input: nums = [0,1,1]
Output: [true,false,false]
Explanation: The input numbers in binary are 0, 01, 011; which are 0, 1, and 3 in base-10.
Only the first number is divisible by 5, so answer[0] is true.
Example 2:

Input: nums = [1,1,1]
Output: [false,false,false]
 
*/

# include<iostream>
# include<vector>
using namespace std;

vector<bool> prefixesDivBy5(vector<int>& nums) {
    vector<bool>ans;
    int value=0;
    for(int bit : nums) {
        value = (value * 2 + bit) % 5;
        ans.push_back(value == 0);
    }
    return ans;
}
int main(){
    vector<int>arr ={0,1,1};
    vector<bool>v = prefixesDivBy5(arr);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}