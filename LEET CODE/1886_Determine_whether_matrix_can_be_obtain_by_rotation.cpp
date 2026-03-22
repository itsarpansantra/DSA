/*
Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target by rotating mat in 90-degree increments, or false otherwise.

 

Example 1:


Input: mat = [[0,1],[1,0]], target = [[1,0],[0,1]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise to make mat equal target.
Example 2:


Input: mat = [[0,1],[1,1]], target = [[1,0],[0,1]]
Output: false
Explanation: It is impossible to make mat equal to target by rotating mat.
Example 3:


Input: mat = [[0,0,0],[0,1,0],[1,1,1]], target = [[1,1,1],[0,1,0],[0,0,0]]
Output: true
Explanation: We can rotate mat 90 degrees clockwise two times to make mat equal target.
*/
# include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<int>>&v , vector<vector<int>>&target){
    int  n = v.size();
    for(int i=0;i<4;i++){ // 0,90,180,270
        if(mat==target) return true;

        //transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }

        // reverse row 
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    return false;
}
int main(){
    vector<vector<int>>v = {{0,0,0},{0,1,0},{1,1,1}};
    vector<vector<int>>target = {{1,1,1},{0,1,0},{0,0,0}};
    cout<<check(v,target);
}