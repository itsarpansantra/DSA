/*
You are given two integer arrays nums1 and nums2 sorted in non-decreasing order and an integer k.

Define a pair (u, v) which consists of one element from the first array and one element from the second array.

Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums.

 

Example 1:

Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]]
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
Example 2:

Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2
Output: [[1,1],[1,1]]
Explanation: The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]
 

Constraints:

1 <= nums1.length, nums2.length <= 105
-109 <= nums1[i], nums2[i] <= 109
nums1 and nums2 both are sorted in non-decreasing order.
1 <= k <= 104
k <= nums1.length * nums2.length
*/
# include<bits/stdc++.h>
using namespace std;
vector<vector<int>>smallest_pair(vector<int>&nums1 ,vector<int>&nums2){
    vector<vector<int>>ans;
    if(nums1.empty() || nums2.empty() || k==0) return ans;
    priority_queue< // Min heap: (sum, i, j)
        tuple<int,int,int> , 
        vector<tuple<int,int,int> >,
        greater<tuple<int,int,int> >
    > pq;

    for(int i=0;i<nums1.size() &&i<k;i++){ // store in pq nums2 r first and nums1 all index pair with sum
        pq.push({nums1[i]+nums2[0],i,0});
    }

    while(k-- >0 && !pq.empty()){
        auto[sum,i,j] = pq.top(); // first element on pq
        pq.pop();
        ans.push_back({nums1[i],nums2[j]}); // pq top element r sum ,with pair

        if(j+1<nums2.size()){ // again push on nums2 element 
            pq.push({nums1[i]+nums2[j+1],i,j+1});
        }
    }
    return ans;
}
int main(){
    vector<int>v = {1,7,11};
    vector<int>p = {2,4,6};
    vector<vector<int>> s = smallest_pair(v,p);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[0].size();j++){
            cout<<s[i][j]<<" ";
        }
    }
}