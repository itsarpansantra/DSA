/*
Given a 2D integer matrix mat[][] and a list of queries queries[][], your task is to answer a series of submatrix sum queries.

Each query is represented as a list [r1, c1, r2, c2], where:

(r1, c1) is the top-left coordinate of the submatrix
(r2, c2) is the bottom-right coordinate of the submatrix (both inclusive)
Your task is to return a list of integers, the sum of elements within the specified submatrix for each query.

Examples: 

Input: mat[][] = [[1, 2, 3], queries[][] = [[0, 0, 1, 1], [1, 0, 2, 2]]
                [1, 1, 0],
                [4, 2, 2]]
Output: [5, 10]
Explanation: 
Query 1 selects submatrix [[1, 2], [1, 1]] → sum = 5.
Query 2 selects submatrix [[1, 1, 0], [4, 2, 2]] → sum = 10.
Input: mat[][] = [[1, 1, 1], queries[][] = [[1, 1, 2, 2], [0, 0, 2, 2], [0, 2, 2, 2]]
                [1, 1, 1],
                [1, 1, 1]]
Output: [4, 9, 3]
Explanation: 
Query 1 selects submatrix [[1, 1], [1, 1]] → sum = 4.
Query 2 selects submatrix [[1, 1, 1], [1, 1, 1], [1, 1, 1]] → sum = 9.
Query 3 selects submatrix [[1], [1], [1]] → sum = 3.
*/
# include<iostream>
# include<vector>
using namespace std;
vector<int>submatrix(vector<vector<int>>&v,vector<vector<int>>&query){
    int n = v.size();
    int m = v[0].size();
    vector<vector<int>>pre(n,vector<int>(m,0));
    pre[0][0] = v[0][0];

    //prefix sum

    // first row
    for(int j=1;j<m;j++){
        pre[0][j] = pre[0][j-1]+v[0][j];
    }
    //first column 
    for(int i=1;i<n;i++){
        pre[i][0] = pre[i-1][0]+v[i][0];
    }

    // prefix sum of another row column
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            pre[i][j]=v[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
        }
    }

    // answer query
    vector<int>ans;

    for(int i=0;i<query.size();i++){
        int r1= query[i][0] , r2= query[i][2];
        int c1 = query[i][1] , c2 = query[i][3];
        int sum = pre[r2][c2];
        if (r1 > 0) sum -= pre[r1 - 1][c2];
        if (c1 > 0) sum -= pre[r2][c1 - 1];
        if (r1 > 0 && c1 > 0) sum += pre[r1 - 1][c1 - 1];
        ans.push_back(sum);
    }
    return ans;

}
int main(){
    vector<vector<int>>v = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>>query = {{0,0,1,1},{0,1,2,2}};
    vector<int>p = submatrix(v,query);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}