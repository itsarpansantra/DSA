/*
Given an integer array nums and an integer k, modify the array in the following way:

choose an index i and replace nums[i] with -nums[i].
You should apply this process exactly k times. You may choose the same index i multiple times.

Return the largest possible sum of the array after modifying it in this way.

 

Example 1:

Input: nums = [4,2,3], k = 1
Output: 5
Explanation: Choose index 1 and nums becomes [4,-2,3].
Example 2:

Input: nums = [3,-1,0,2], k = 3
Output: 6
Explanation: Choose indices (1, 2, 2) and nums becomes [3,1,0,2].
Example 3:

Input: nums = [2,-3,-1,5,-4], k = 2
Output: 13
Explanation: Choose indices (1, 4) and nums becomes [2,3,-1,5,4].
*/
// jato k acha tatobar kauka -1 dia gun korbo . dia max sum return korbo . 
# include<iostream>
# include<vector>
# include<algorithm>
# include<queue>
using namespace std;
int max_sum(vector<int>&v,int k){
    priority_queue<int,vector<int>,greater<int>>pq(v.begin(),v.end());
    int sum =0;
    for(int i=0;i<v.size();i++){
        sum+=v[i]; // puro array sum calculate
    }
    while(k--){
        int ele = pq.top(); // this is smallest element 
        if(ele==0) break; // bar bar aka negation korbo
        pq.pop(); // array thaka bar kore abar gun kore push kore debo
        sum-=ele;
        pq.push((-1)*ele);
        sum+=(-ele); // negative element dichhi 
    }
    return sum;
}
int main(){
    vector<int>p = {1,-5,6,0,7,-4,-3};
    int k =3;
    cout<<max_sum(p,k);
}