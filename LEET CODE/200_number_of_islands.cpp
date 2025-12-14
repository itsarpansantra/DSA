/*
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

 

Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
*/

// verticle and horizontaly je 1 gulo acha ignore korta hoba 
// ar alada vaba je island acha count korta hoba 
# include<iostream>
# include<vector>
using namespace std;
void dfs(int i,int j,vector<vector<int>> &v){
    int n = v.size();
    int m = v[0].size();
    if(i<0||i>=n||j<0||j>=m||v[i][j]==0) return ; // check boundary and water
    v[i][j]=0; // mark visited
    // 4 direction marking
    dfs(i+1,j,v);
    dfs(i-1,j,v);
    dfs(i,j+1,v);
    dfs(i,j-1,v);
}
int island(vector<vector<int>> &v){
    int n = v.size();
    int m = v[0].size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==1){ 
                count++; // found new island
                dfs(i,j,v); // mark the whole island
            }
        }
    }
    return count;
}
int main(){
    vector<vector<int>> v= {{1,1,1,1,0},{1,1,0,1,0},{1,1,0,0,0},{0,0,0,0,0}};
    cout<<island(v);
}