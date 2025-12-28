/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

 

Example 1:

Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
Output: 8
Explanation: There are 8 negatives number in the matrix.
Example 2:

Input: grid = [[3,2],[1,0]]
Output: 0
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<queue>
using namespace std;
int negative(vector<vector<int>>&v){
    int n = v.size();
    int m = v[0].size();
    int i=n-1,j=0;
    int count =0;
    while(i>=0 && j<m){
        if(v[i][j]<0){
            count+=(m-j);
            i--;
        }
        else j++;
    }
    return count;
}
int main(){
    vector<vector<int>>v={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    cout<<negative(v);
}