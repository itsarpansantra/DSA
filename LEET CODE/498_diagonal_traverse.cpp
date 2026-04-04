/*
Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.

 

Example 1:


Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,4,7,5,3,6,8,9]
Example 2:

Input: mat = [[1,2],[3,4]]
Output: [1,2,3,4]
 

Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 104
1 <= m * n <= 104
-105 <= mat[i][j] <= 105
*/
# include<bits/stdc++.h>
using namespace std;
vector<int> diagonal(vector<vector<int>>&v){
    int n = v.size();
    int m = v[0].size();
        
    vector<int> ans;
        
    int row = 0, col = 0;
    bool up = true;
        
    for (int i = 0; i < n * m; i++) {
        ans.push_back(v[row][col]);
            
        if (up) {
            if (col == m - 1) {
                row++;
                up = false;
            }
            else if (row == 0) {
                col++;
                up = false;
            }
            else {
                row--;
                col++;
            }
        } 
        else {
            if (row == n - 1) {
                col++;
                up = true;
            }
            else if (col == 0) {
                row++;
                up = true;
            }
            else {
                row++;
                col--;
            }
        }
    }
        
    return ans;
}
int main(){
    vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int>p = diagonal(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}