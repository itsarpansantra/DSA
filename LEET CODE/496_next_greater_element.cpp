/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

 

Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
Example 2:

Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
- 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.
 
*/
# include<iostream>
# include<vector>
# include<stack>
# include<unordered_map>
using namespace std;
vector<int>next_greater(vector<int>&num1 ,vector<int>&num2){
    unordered_map<int,int>mp;
    stack<int>st;
    vector<int>ans;

    for(int x:num2){
        if(!st.empty() && x>st.top()){ // 
            mp[st.top()]=x; // num2 every element gretest number store
            st.pop();
        }
        st.push(x); // for compare and indexing gretest element
    }
    while(!st.empty()){ // left element in stack their gretest element is -1
        mp[st.top()] = -1;
        st.pop();
    }
    // now push gretest element in ans array 
    for(int x:num1){
        ans.push_back(mp[x]);
    }
    return ans;
}
int main(){
    vector<int>num1 = {4,1,2};
    vector<int>num2 = {1,3,4,2};
    vector<int>s = next_greater(num1,num2);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}