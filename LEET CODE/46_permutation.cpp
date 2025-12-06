/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
*/
# include<iostream>
# include<string>
# include<vector>
# include<algorithm>
# include<cmath>
# include<climits>
using namespace std;
void solve(vector<vector<int>>&ans,vector<int>&v,int idx){
    if(v.size()==idx){
        ans.push_back(v);
        return ;
    }
    for(int i=idx;i<v.size();i++){
        swap(v[idx],v[i]); // first element at  index
        solve(ans,v,idx+1);
        swap(v[idx],v[i]); // backtrack
    }
}
vector<vector<int>>permutation(vector<int>&v){
    vector<vector<int>>ans;
    solve(ans,v,0);
    return ans;
}
int main(){
    vector<int>v= {1,2,3};
    vector<vector<int>> p = permutation(v);
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p[0].size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}