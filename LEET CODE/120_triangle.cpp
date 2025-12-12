/*
Given a triangle array, return the minimum path sum from top to bottom.

For each step, you may move to an adjacent number of the row below. More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.

 

Example 1:

Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
Output: 11
Explanation: The triangle looks like:
   2
  3 4
 6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).
Example 2:

Input: triangle = [[-10]]
Output: -10
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int sum(vector<vector<int>>&v){
    int n = v.size();
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<v[i].size();j++){
            v[i][j]+=min(v[i+1][j],v[i+1][j+1]);
        }
    }
    return v[0][0];
}
int main(){
    vector<vector<int>>v = {{-10}};
    cout<<sum(v);
}